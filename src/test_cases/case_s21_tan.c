#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_tan_test_1) {
  double x = 1.5;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), TEST_EPS);
}
END_TEST

START_TEST(s21_tan_test_2) {
  double x = -2.5;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), TEST_EPS);
}
END_TEST

START_TEST(s21_tan_test_3) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), TEST_EPS);
}
END_TEST

START_TEST(s21_tan_test_4) {
  double x = 150;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), TEST_EPS);
}
END_TEST

START_TEST(s21_tan_test_5) {
  double x = -50;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), TEST_EPS);
}
END_TEST

START_TEST(s21_tan_test_6) {
  double x = INFINITY;
  ck_assert_ldouble_nan(s21_tan(x));
  ck_assert_ldouble_nan(tan(x));
}
END_TEST

START_TEST(s21_tan_test_7) {
  double x = -INFINITY;
  ck_assert_ldouble_nan(s21_tan(x));
  ck_assert_ldouble_nan(tan(x));
}
END_TEST

START_TEST(s21_tan_test_8) {
  double x = NAN;
  ck_assert_ldouble_nan(s21_tan(x));
  ck_assert_ldouble_nan(tan(x));
}
END_TEST

START_TEST(s21_tan_test_9) {
  double x = M_PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), TEST_EPS);
}
END_TEST

TCase *s21_tc_tan(void) {
  TCase *tc_tan = tcase_create("s21_tan");

  tcase_add_test(tc_tan, s21_tan_test_1);
  tcase_add_test(tc_tan, s21_tan_test_2);
  tcase_add_test(tc_tan, s21_tan_test_3);
  tcase_add_test(tc_tan, s21_tan_test_4);
  tcase_add_test(tc_tan, s21_tan_test_5);
  tcase_add_test(tc_tan, s21_tan_test_6);
  tcase_add_test(tc_tan, s21_tan_test_7);
  tcase_add_test(tc_tan, s21_tan_test_8);
  tcase_add_test(tc_tan, s21_tan_test_9);

  return tc_tan;
}
