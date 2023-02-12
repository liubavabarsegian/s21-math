#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(cos_fn) {
  double x;
  x = 1.5;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), 0.0000001);
  x = -2.5;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), 0.0000001);
  x = 0;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), 0.0000001);
  x = 150;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), 0.0000001);
  x = -50;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), 0.0000001);
  x = S21_INFINITY;
  ck_assert_double_nan(s21_cos(x));
  x = -S21_INFINITY;
  ck_assert_double_nan(s21_cos(x));
  x = S21_NAN;
  ck_assert_double_nan(s21_cos(x));
  x = -S21_NAN;
  ck_assert_double_nan(s21_cos(x));
  x = S21_PI / 2;
  ck_assert_int_eq(s21_cos(x), 0);
  x = -S21_PI / 2;
  ck_assert_int_eq(s21_cos(x), 0);
}
END_TEST

TCase *s21_tc_cos(void) {
  TCase *tc_cos = tcase_create("s21_cos");

  tcase_add_test(tc_cos, cos_fn);

  return tc_cos;
}
