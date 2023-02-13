#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(acos_fn) {
  double x;
  x = 1;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), 0.0000001);
  x = -1;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), 0.0000001);
  x = 0;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), 0.0000001);
  x = 50;
  ck_assert_double_nan(s21_acos(x));
  x = -50;
  ck_assert_double_nan(s21_acos(x));
  x = -0.8;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), 0.0000001);
  x = 0.6;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), 0.0000001);
  x = S21_INFINITY;
  ck_assert_double_nan(s21_acos(x));
  x = -S21_INFINITY;
  ck_assert_double_nan(s21_acos(x));
  x = S21_NAN;
  ck_assert_double_nan(s21_acos(x));
  x = -S21_NAN;
  ck_assert_double_nan(s21_acos(x));
}
END_TEST

TCase *s21_tc_acos(void) {
  TCase *tc_acos = tcase_create("s21_acos");

  tcase_add_test(tc_acos, acos_fn);

  return tc_acos;
}
