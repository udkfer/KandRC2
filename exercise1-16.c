// Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print the length of arbitrarily long input lines, and as much as possible of the text.

/* Reads a set of text lines and prints the longest one. */
#include <stdio.h>

#define MAXLINE 1000

int getsline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
  int len;                  // current line length
  int max;                  // maximum lenght seen so far
  int total_len;
  char line[MAXLINE];       // current input line
  char longest[MAXLINE];    // longest line saved here
  char first_chunk[MAXLINE];

  max = 0;

  while ((len = getsline(line, MAXLINE)) > 0) {
    total_len = len;
    copy(first_chunk, line);
    if (len > 0) {
      while (line[len-1] != '\n' && len == MAXLINE-1) {
        len = getsline(line, MAXLINE);
        total_len += len;
      }
    }
    if (total_len > max)
    {
      max = total_len;
      copy(longest, first_chunk);
    }
  }

  if (max > 0)             // there was a line
    printf("%d: %s", max, longest);

  return 0;
}

/* getsline: read a line into s, return length */
int getsline(char s[], int lim)
{
  int c, i;

  for (i = 0; (i < lim-1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
    s[i] = c;
  if (c == '\n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
