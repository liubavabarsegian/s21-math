#include "s21_math.h"

long double s21_floor(double x) {
  long double result;
  result = (int)x;
  if (s21_isinf(x)) {
    result = (long double)x;
  } else if (x < 0 && result != x) {
    result -= 1;
  }
  return result;
}
