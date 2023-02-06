#include "s21_math.h"

//в процессе разработки
long double s21_pow(double base, double exp) {}

long double s21_pow_int(double base, long long int exp) {
  long double result;

  if (exp == 0) return 1;
  result = 1;
  if (exp > 0) {
    for (long long int i = 1; i <= exp; i++) {
      result = result * base;
    }
  } else {
    exp *= -1;
    for (long long int i = 1; i <= exp; i++) {
      result = result / base;
    }
  }
  return result;
}

// #include <stdio.h>
// #include "math.h"
// int main()
// {
//     printf("%Lf\n", s21_pow_int(-2, -3));
//     printf("%f\n", pow(-2, -3));
// }