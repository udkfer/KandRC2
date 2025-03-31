#include <stdio.h>

int main()

{
  char c, ot;

  ot = 0;

  while ((c = getchar()) != EOF) {
    if (c == (' ' | '\t' | '\n'))
      printf("%c\n", ot);
  }
  printf("%s\n", ot);
}
