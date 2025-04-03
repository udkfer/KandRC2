// Exercise 1-12. Write a program that prints its input one word per line.
#include <stdio.h>

int main() {
  int c, nw;

  nw = 0;

  while ((c = getchar()) != EOF) {
    if ( c == ' ') {
      nw = 1;
      putchar('\n');
    }
    else if (putchar(c)) {
    }
  }
  return 0;
}
