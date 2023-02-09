#include "s21_math.h"

//в процессе разработки
long double s21_pow(double base, double exp) {
  if (exp == 0) return 1;
  if (base == 1) return 1;
  if (s21_isinf(base) || s21_isinf(exp)) return S21_NAN;
  if (base < 0 && exp != (long long int)exp) return S21_NAN;

  long double result = 0;
  int is_base_negative = base < 0;
  int is_pow_negative = exp < 0;
  if (is_base_negative) base = -base;
  if (is_pow_negative) exp = -exp;
  // a^x = e ^(ln (a ^x)) = e ^(x * lna)
  result = s21_exp(exp * s21_log(base));

  // negative base

  if (is_pow_negative) {
    result = 1. / result;
  }
  return result;
}

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
//     printf("%Lf\n", s21_pow(3, 1.003));
//     printf("%f\n", pow(3, 1.003));
// }