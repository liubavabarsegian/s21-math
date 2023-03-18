#include "s21_math.h"

long double s21_atan(double x) {
  long double res = x;
  long double sum = x;
  long double i = 1.0;
  if (x == 1) {
    res = S21_PI / 4;
  } else if (x == -1) {
    res = -S21_PI / 4;
  } else if ((x < 1) && (x > -1)) {
    while (s21_fabs(sum) > S21_EPS) {
      sum = -1.0 * sum * x * x * (2.0 * i - 1.0) / (2.0 * i + 1.0);
      res += sum;
      i++;
    }
  } else if (x > 1) {
    res = S21_PI / 2 - s21_atan(1 / x);
  } else if (x < -1) {
    res = -S21_PI / 2 - s21_atan(1 / x);
  }
  return res;
}
