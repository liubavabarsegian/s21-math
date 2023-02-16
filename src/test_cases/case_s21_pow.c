#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_pow_test_1) {
  double x = 20;
  double y = 0.4;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_2) {
  double x = -20;
  double y = 0.4;
  ck_assert_ldouble_nan(s21_pow(x, y));
  ck_assert_ldouble_nan(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_3) {
  double x = INFINITY;
  double y = INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_4) {
  double x = -INFINITY;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_5) {
  double x = NAN;
  double y = NAN;
  ck_assert_ldouble_nan(s21_pow(x, y));
  ck_assert_ldouble_nan(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_6) {
  double x = INFINITY;
  double y = NAN;
  ck_assert_ldouble_nan(s21_pow(x, y));
  ck_assert_ldouble_nan(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_7) {
  double x = NAN;
  double y = INFINITY;
  ck_assert_ldouble_nan(s21_pow(x, y));
  ck_assert_ldouble_nan(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_8) {
  double x = -INFINITY;
  double y = NAN;
  ck_assert_ldouble_nan(s21_pow(x, y));
  ck_assert_ldouble_nan(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_9) {
  double x = NAN;
  double y = -INFINITY;
  ck_assert_ldouble_nan(s21_pow(x, y));
  ck_assert_ldouble_nan(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_10) {
  double x = -INFINITY;
  double y = INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_11) {
  double x = INFINITY;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_12) {
  double x = 12.69;
  double y = 0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_13) {
  double x = -20.63;
  double y = 3;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_14) {
  double x = -20.63;
  double y = 6;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_15) {
  double x = -INFINITY;
  double y = 0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_16) {
  double x = INFINITY;
  double y = 0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_17) {
  double x = NAN;
  double y = 0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_18) {
  double x = 0;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_19) {
  double x = 0;
  double y = INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_20) {
  double x = 0;
  double y = NAN;
  ck_assert_ldouble_nan(s21_pow(x, y));
  ck_assert_ldouble_nan(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_21) {
  double x = 0;
  double y = 0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_22) {
  double x = 16894.2629;
  double y = 1545;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_23) {
  double x = 16894.2629;
  double y = -1545;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_24) {
  double x = -16894.2629;
  double y = 1545;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_25) {
  double x = -16894.2629;
  double y = -1545;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

TCase *s21_tc_pow(void) {
  TCase *tc_pow = tcase_create("s21_pow");

  tcase_add_test(tc_pow, s21_pow_test_1);
  tcase_add_test(tc_pow, s21_pow_test_2);
  tcase_add_test(tc_pow, s21_pow_test_3);
  tcase_add_test(tc_pow, s21_pow_test_4);
  tcase_add_test(tc_pow, s21_pow_test_5);
  tcase_add_test(tc_pow, s21_pow_test_6);
  tcase_add_test(tc_pow, s21_pow_test_7);
  tcase_add_test(tc_pow, s21_pow_test_8);
  tcase_add_test(tc_pow, s21_pow_test_9);
  tcase_add_test(tc_pow, s21_pow_test_10);
  tcase_add_test(tc_pow, s21_pow_test_11);
  tcase_add_test(tc_pow, s21_pow_test_12);
  tcase_add_test(tc_pow, s21_pow_test_13);
  tcase_add_test(tc_pow, s21_pow_test_14);
  tcase_add_test(tc_pow, s21_pow_test_15);
  tcase_add_test(tc_pow, s21_pow_test_16);
  tcase_add_test(tc_pow, s21_pow_test_17);
  tcase_add_test(tc_pow, s21_pow_test_18);
  tcase_add_test(tc_pow, s21_pow_test_19);
  tcase_add_test(tc_pow, s21_pow_test_20);
  tcase_add_test(tc_pow, s21_pow_test_21);
  tcase_add_test(tc_pow, s21_pow_test_22);
  tcase_add_test(tc_pow, s21_pow_test_23);
  tcase_add_test(tc_pow, s21_pow_test_24);
  tcase_add_test(tc_pow, s21_pow_test_25);
  
  return tc_pow;
}
