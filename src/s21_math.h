#ifndef MATH_H_
#define MATH_H_

#define s21_isnan(x) __builtin_isnan(x)
#define s21_isinf(x) __builtin_isinf(x)

int s21_abs(int x);
long double s21_fabs(double x);
long double s21_floor(double x);

#endif