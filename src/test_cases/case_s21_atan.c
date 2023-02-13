#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(atan_fn) {
  double x;
  x = 1;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
  x = -1;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
  x = 0;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
  x = 50;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
  x = -50;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
  x = -0.8;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
  x = 0.6;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
  x = S21_INFINITY;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
  x = -S21_INFINITY;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), 0.0000001);
  x = S21_NAN;
  ck_assert_double_nan(s21_atan(x));
  x = -S21_NAN;
  ck_assert_double_nan(s21_atan(x));
}
END_TEST

TCase *s21_tc_atan(void) {
  TCase *tc_atan = tcase_create("s21_atan");

  tcase_add_test(tc_acos, atan_fn);

  return tc_atan;
}
