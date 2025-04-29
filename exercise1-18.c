// Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.

#include <stdio.h>

#define MAXLINE 1000

int getsline(char line[], int maxline);

int main(void)
{
  int len;
  int total_len;
  char line[MAXLINE];

  while ((len = getsline(line, MAXLINE)) > 0) {
    total_len = len;
    if (len > 80) {
      printf("%s", line);
      while ( len > 0 && line[len-1] != '\n' && len == MAXLINE-1) {
        len = getsline(line, MAXLINE);
        printf("%s", line);
        total_len += len;
      }
    }
  }

  return 0;
}

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

