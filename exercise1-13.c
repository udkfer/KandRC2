// Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

#include <stdio.h>

int main() {
  int c, nw;

  nw = 0;

  while ((c = getchar()) != EOF) {
    if ( c == ' ') {
      nw = 1;
      putchar('\n');
    }
    else if (putchar('.')) {
    }
  }
  return 0;
}

