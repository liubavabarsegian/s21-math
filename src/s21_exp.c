#include "s21_math.h"

//для больших отрицательных чисел не работает походу
long double s21_exp(double x) {
  if (x == -S21_INFINITY) return 0;
  if (x == S21_INFINITY) return S21_INFINITY;

  long double result = 0;
  for (int i = 0; i < 200; i++) {
    result += s21_pow_int(x, i) / (long double)s21_factorial(i);
  }
  return result;
}

long long int s21_factorial(int x) {
  if (x == 1 || x == 0) return 1;
  if (x > 1) return x * s21_factorial(x - 1);
  return S21_NAN;
}
