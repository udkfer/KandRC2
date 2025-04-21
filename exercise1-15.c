// Exercise 1-15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.

#include <stdio.h>

float fahr_to_celsius(float fahr) {
  return (5.0/9.0) * (fahr - 32.0);
}

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;

  if (lower > upper || step <= 0) {
    printf("Conflicting values");
    return 1;
  }
  else {
    printf("Fahr\tCelsius\n");
  }
  while (fahr <= upper) {
    celsius = fahr_to_celsius(fahr);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}


