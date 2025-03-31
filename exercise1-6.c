#include <stdio.h>

int main()

{
  int c;
  while ((c = getchar()) != EOF) {
    putchar(c);
    printf("%d\n", c != EOF);
  }
  printf("%d\n", c != EOF);
}
