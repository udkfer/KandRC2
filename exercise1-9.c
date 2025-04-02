// Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
#include <stdio.h>

int main()

{
  int c, pc;

  pc = 0;

  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      putchar(c);
      if (pc == 0) {
        pc = 1;
        putchar(' ');
      }
    }
  }
  return 0;
}
