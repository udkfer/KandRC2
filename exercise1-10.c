// Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.

#include <stdio.h>

int main() {

  int input;
  int tab;
  int b;
  int bslash;

  tab = 0;
  b = 0;
  bslash = 0;

  while ((input = getchar()) != EOF) {
    if ( input == '\t' ) {
      tab = 1;
      putchar('\\');
      putchar('t');
    }
    if ( input == '\b' ) {
      b = 1;
      putchar('\\');
      putchar('b');
    }
    if ( input == '\\' ) {
      bslash = 1;
      putchar('\\');
    }
    if ((input != '\t') || (input != '\b') || (input != '\\')) {
      putchar(input);
    }
  }
  return 0;
}
