// Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

#include <stdio.h>

#define IN   1
#define OUT  0
#define MAX_LENGTH 10

int main() {
  int c, c_count, length_index, asterisk_count, word_state;
  int word_length_count[MAX_LENGTH] = {0};

  word_state = OUT;
  c = c_count = 0;

  while ((c = getchar()) != EOF) {
    if ((c == ' ') || (c == '\t') || (c == '\n')) {
      if (word_state == IN) {
        ++word_length_count[c_count];
        c_count = 0;
        word_state = OUT;
      }
    } else {
      ++c_count;
      word_state = IN;
    }
  }
  if (word_state == IN) {
    if (c_count >= MAX_LENGTH) c_count = 9;
    ++word_length_count[c_count];
  }

  for (length_index = 1; length_index < MAX_LENGTH; length_index++) {
    if (word_length_count[length_index] > 0) {
      printf("%d: ", length_index);
      for (asterisk_count = 0; asterisk_count < word_length_count[length_index]; asterisk_count++) {
        putchar('*');
      }
      printf("\n");
    }
  }

  return 0;
}

