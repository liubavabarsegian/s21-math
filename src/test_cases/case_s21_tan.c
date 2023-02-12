#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(tan_fn) {
  double x;
  x = 1.5;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), 0.000001);
  x = -2.5;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), 0.000001);
  x = 0;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), 0.000001);
  x = 150;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), 0.000001);
  x = -50;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), 0.000001);
  x = S21_INFINITY;
  ck_assert_double_nan(s21_tan(x));
  x = -S21_INFINITY;
  ck_assert_double_nan(s21_tan(x));
  x = S21_NAN;
  ck_assert_double_nan(s21_tan(x));
  x = -S21_NAN;
  ck_assert_double_nan(s21_tan(x));
}
END_TEST

TCase *s21_tc_tan(void) {
  TCase *tc_tan = tcase_create("s21_tan");

  tcase_add_test(tc_tan, tan_fn);

  return tc_tan;
}
