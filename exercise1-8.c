#include <stdio.h>

int main()

{
  int c, bl, tb, nl;

  bl = 0;
  tb = 0;
  nl = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++bl;
    if (c == '\t')
      ++tb;
    if (c == '\n')
      ++nl;
  }
  printf("%d ", bl);
  printf("%d ", tb);
  printf("%d\n", nl);
}
