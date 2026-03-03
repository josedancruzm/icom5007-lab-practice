#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#include "../include/functions.h"

int main(int argc, char* argv[]) {
  if (argc != 3) {
    printf("Error: Invalid number of arguments.");
  }

  float value = atof(argv[1]);
  char unit = toupper(argv[2][0]);

  if (unit != 'C' && unit != 'F' && unit != 'K') {
    printf("Error: Invalid unit.");
  }

  float result1;
  float result2;
  char unit1;
  char unit2;
  if (unit == 'C') {
    result1 = CelsiusToFahrenheit(value);
    result2 = CelsiusToKelvin(value);

    unit1 = 'F';
    unit2 = 'K';
  } else if (unit == 'F') {
    result1 = FahrenheitToCelsius(value);
    result2 = CelsiusToKelvin(FahrenheitToCelsius(value));

    unit1 = 'C';
    unit2 = 'K';
  } else if (unit == 'K') {
    result1 = KelvinToCelsius(value);
    result2 = CelsiusToFahrenheit(KelvinToCelsius(value));

    unit1 = 'C';
    unit2 = 'F';
  }

  printf("%.2f %c is %.2f %c and %.2f %c\n", value, unit, result1, unit1,
         result2, unit2);
}