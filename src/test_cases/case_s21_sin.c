#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_sin_test_1) {
  double x = 1.5;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), TEST_EPS);
}
END_TEST

START_TEST(s21_sin_test_2) {
  double x = -2.5;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), TEST_EPS);
}
END_TEST

START_TEST(s21_sin_test_3) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), TEST_EPS);
}
END_TEST

START_TEST(s21_sin_test_4) {
  double x = 150;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), TEST_EPS);
}
END_TEST

START_TEST(s21_sin_test_5) {
  double x = -50;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), TEST_EPS);
}
END_TEST

START_TEST(s21_sin_test_6) {
  double x = INFINITY;
  ck_assert_ldouble_nan(s21_sin(x));
  ck_assert_ldouble_nan(sin(x));
}
END_TEST

START_TEST(s21_sin_test_7) {
  double x = -INFINITY;
  ck_assert_ldouble_nan(s21_sin(x));
  ck_assert_ldouble_nan(sin(x));
}
END_TEST

START_TEST(s21_sin_test_8) {
  double x = NAN;
  ck_assert_ldouble_nan(s21_sin(x));
  ck_assert_ldouble_nan(sin(x));
}
END_TEST

START_TEST(s21_sin_test_9) {
  double x = M_PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), TEST_EPS);
}
END_TEST

START_TEST(s21_sin_test_10) {
  double x = M_PI_2;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), TEST_EPS);
}
END_TEST

START_TEST(s21_sin_test_11) {
  double x = -M_PI_2;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), TEST_EPS);
}
END_TEST

TCase *s21_tc_sin(void) {
  TCase *tc_sin = tcase_create("s21_sin");

  tcase_add_test(tc_sin, s21_sin_test_1);
  tcase_add_test(tc_sin, s21_sin_test_2);
  tcase_add_test(tc_sin, s21_sin_test_3);
  tcase_add_test(tc_sin, s21_sin_test_4);
  tcase_add_test(tc_sin, s21_sin_test_5);
  tcase_add_test(tc_sin, s21_sin_test_6);
  tcase_add_test(tc_sin, s21_sin_test_7);
  tcase_add_test(tc_sin, s21_sin_test_8);
  tcase_add_test(tc_sin, s21_sin_test_9);
  tcase_add_test(tc_sin, s21_sin_test_10);
  tcase_add_test(tc_sin, s21_sin_test_11);

  return tc_sin;
}
