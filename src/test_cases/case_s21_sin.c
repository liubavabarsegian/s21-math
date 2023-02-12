#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(sin_fn) {
  double x;
  x = 1.5;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), 0.0000001);
  x = -2.5;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), 0.0000001);
  x = 0;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), 0.0000001);
  x = 150;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), 0.0000001);
  x = -50;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), 0.0000001);
  x = S21_INFINITY;
  ck_assert_double_nan(s21_sin(x));
  x = -S21_INFINITY;
  ck_assert_double_nan(s21_sin(x));
  x = S21_NAN;
  ck_assert_double_nan(s21_sin(x));
  x = -S21_NAN;
  ck_assert_double_nan(s21_sin(x));
}
END_TEST

TCase *s21_tc_sin(void) {
  TCase *tc_sin = tcase_create("s21_sin");

  tcase_add_test(tc_sin, sin_fn);

  return tc_sin;
}
