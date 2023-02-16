#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_floor_test_1) {
  double x = 0.1;
  ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), TEST_EPS);
}
END_TEST

START_TEST(s21_floor_test_2) {
  double x = -0.1;
  ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), TEST_EPS);
}
END_TEST

START_TEST(s21_floor_test_3) {
  double x = DBL_MAX;
  ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), TEST_EPS);
}
END_TEST

START_TEST(s21_floor_test_4) {
  double x = DBL_MIN;
  ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), TEST_EPS);
}
END_TEST

START_TEST(s21_floor_test_5) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_floor(x), floor(x), TEST_EPS);
}
END_TEST

START_TEST(s21_floor_test_6) {
  double x = NAN;
  ck_assert_ldouble_nan(s21_floor(x));
  ck_assert_ldouble_nan(floor(x));
}
END_TEST

START_TEST(s21_floor_test_7) {
  double x = -NAN;
  ck_assert_ldouble_nan(s21_floor(x));
  ck_assert_ldouble_nan(floor(x));
}
END_TEST

START_TEST(s21_floor_test_8) {
  double x = INFINITY;
  ck_assert_ldouble_infinite(s21_floor(x));
  ck_assert_ldouble_infinite(floor(x));
}
END_TEST

START_TEST(s21_floor_test_9) {
  double x = -INFINITY;
  ck_assert_ldouble_infinite(s21_floor(x));
  ck_assert_ldouble_infinite(floor(x));
}
END_TEST

TCase *s21_tc_floor(void) {
  TCase *tc_floor = tcase_create("s21_floor");

  tcase_add_test(tc_floor, s21_floor_test_1);
  tcase_add_test(tc_floor, s21_floor_test_2);
  tcase_add_test(tc_floor, s21_floor_test_3);
  tcase_add_test(tc_floor, s21_floor_test_4);
  tcase_add_test(tc_floor, s21_floor_test_5);
  tcase_add_test(tc_floor, s21_floor_test_6);
  tcase_add_test(tc_floor, s21_floor_test_7);
  tcase_add_test(tc_floor, s21_floor_test_8);
  tcase_add_test(tc_floor, s21_floor_test_9);

  return tc_floor;
}
