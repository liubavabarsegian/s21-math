#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_cos_test_1) {
  double x = 1.5;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_2) {
  double x = -2.5;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_3) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_4) {
  double x = 150;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_5) {
  double x = -50;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_6) {
  double x = INFINITY;
  ck_assert_ldouble_nan(s21_cos(x));
  ck_assert_ldouble_nan(cos(x));
}
END_TEST

START_TEST(s21_cos_test_7) {
  double x = -INFINITY;
  ck_assert_ldouble_nan(s21_cos(x));
  ck_assert_ldouble_nan(cos(x));
}
END_TEST

START_TEST(s21_cos_test_8) {
  double x = NAN;
  ck_assert_ldouble_nan(s21_cos(x));
  ck_assert_ldouble_nan(cos(x));
}
END_TEST

START_TEST(s21_cos_test_9) {
  double x = M_PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_10) {
  double x = M_PI_2;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_11) {
  double x = -M_PI_2;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), TEST_EPS);
}
END_TEST

TCase *s21_tc_cos(void) {
  TCase *tc_cos = tcase_create("s21_cos");

  tcase_add_test(tc_cos, s21_cos_test_1);
  tcase_add_test(tc_cos, s21_cos_test_2);
  tcase_add_test(tc_cos, s21_cos_test_3);
  tcase_add_test(tc_cos, s21_cos_test_4);
  tcase_add_test(tc_cos, s21_cos_test_5);
  tcase_add_test(tc_cos, s21_cos_test_6);
  tcase_add_test(tc_cos, s21_cos_test_7);
  tcase_add_test(tc_cos, s21_cos_test_8);
  tcase_add_test(tc_cos, s21_cos_test_9);
  tcase_add_test(tc_cos, s21_cos_test_10);
  tcase_add_test(tc_cos, s21_cos_test_11);

  return tc_cos;
}
