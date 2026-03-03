#include "../include/functions.h"

float CelsiusToFahrenheit(float celsius) {
  return (celsius * (9.0f / 5.0f)) + 32.0f;
}

float CelsiusToKelvin(float celsius) { return celsius + 273.15f; }

float FahrenheitToCelsius(float fahrenheit) {
  return (fahrenheit - 32.0f) * (5.0f / 9.0f);
}

float KelvinToCelsius(float kelvin) { return kelvin - 273.15f; }