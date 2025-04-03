// Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.

#include <stdio.h>

int main() {
  int c, nw;

  nw = 0;

  while ((c = getchar()) != EOF) {
    if ( c == ' ') {
      nw = 1;
      putchar(".\n");
    }
    else if (c == 1) {
      putchar('/');
    }
  }
  return 0;
}

