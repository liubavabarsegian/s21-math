#include "s21_math.h"

long double s21_floor(double x) {
  long double result;
  if (s21_isinf(x)) {
    return (long double)x;
  }
  result = (int)x;
  if (x < 0 && result != x) {
    result -= 1;
  }
  return result;
}