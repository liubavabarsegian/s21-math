#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_floor_positive) {
  double a = 1 * pow(10, -6);
  ck_assert_ldouble_eq(s21_floor(a), floor(a));
}
END_TEST

START_TEST(s21_floor_negative) {
  double a = -1 * pow(10, -6);
  ck_assert_ldouble_eq(s21_floor(a), floor(a));
}
END_TEST

START_TEST(s21_floor_null) {
  double a = 0 * pow(10, 0);
  ck_assert_ldouble_eq(s21_floor(a), floor(a));
}
END_TEST

START_TEST(s21_floor_inf) {
  double a = S21_INFINITY;
  ck_assert_ldouble_infinite(s21_floor(a));
}
END_TEST
/*
START_TEST(s21_floor_dbl_max) {
  double a = DBL_MAX;
  ck_assert_ldouble_eq(s21_floor(a), floor(a));
}
END_TEST
*/
START_TEST(s21_floor_dbl_min) {
  double a = DBL_MIN;
  ck_assert_ldouble_eq(s21_floor(a), floor(a));
}
END_TEST

TCase *s21_tc_floor(void) {
  TCase *tc_floor = tcase_create("s21_floor");

  tcase_add_test(tc_floor, s21_floor_positive);
  tcase_add_test(tc_floor, s21_floor_negative);
  tcase_add_test(tc_floor, s21_floor_null);
  tcase_add_test(tc_floor, s21_floor_inf);
//  tcase_add_test(tc_floor, s21_floor_dbl_max);
  tcase_add_test(tc_floor, s21_floor_dbl_min);

  return tc_floor;
}
