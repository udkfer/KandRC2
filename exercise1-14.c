// Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.

#include <stdio.h>

#define MAX_C 52

int main() {
  int c, letter_index, asterisk_count;
  int letter_count[MAX_C] = {0};

  while ((c = getchar()) != EOF) {
    if (c >= 'a' && c <= 'z') {
      letter_index = c - 'a';
      ++letter_count[letter_index];
    }
    else if (c >= 'A' && c <= 'Z') {
      letter_index = c - 'A' + 26;
      ++letter_count[letter_index];
    }
  }

  for (letter_index = 0; letter_index < MAX_C; letter_index++) {
    if (letter_count[letter_index] > 0) {
      if (letter_index < 26){
        printf("%c: ", 'a' + letter_index);
      } else{
        printf("%c: ", 'A' + (letter_index - 26));
      }
      for (asterisk_count = 0; asterisk_count < letter_count[letter_index]; asterisk_count++) {
        putchar('*');
      }
      printf("\n");
    }
  }

  return 0;
}
