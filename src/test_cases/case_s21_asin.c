#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(asin_fn) {
  double x;
  x = 1;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), 0.0000001);
  x = -1;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), 0.0000001);
  x = 0;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), 0.0000001);
  x = 50;
  ck_assert_double_nan(s21_asin(x));
  x = -50;
  ck_assert_double_nan(s21_asin(x));
  x = -0.8;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), 0.0000001);
  x = 0.6;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), 0.0000001);
  x = S21_INFINITY;
  ck_assert_double_nan(s21_asin(x));
  x = -S21_INFINITY;
  ck_assert_double_nan(s21_asin(x));
  x = S21_NAN;
  ck_assert_double_nan(s21_asin(x));
  x = -S21_NAN;
  ck_assert_double_nan(s21_asin(x));
}
END_TEST

TCase *s21_tc_asin(void) {
  TCase *tc_asin = tcase_create("s21_asin");

  tcase_add_test(tc_asin, asin_fn);

  return tc_asin;
}
