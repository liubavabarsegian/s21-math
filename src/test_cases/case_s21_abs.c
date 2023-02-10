#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_abs_positive) {
  int a = 1 * pow(10, 0);
  ck_assert_int_eq(s21_abs(a), abs(a));
}
END_TEST

START_TEST(s21_abs_negative) {
  int a = -1 * pow(10, 0);
  ck_assert_int_eq(s21_abs(a), abs(a));
}
END_TEST

START_TEST(s21_abs_null) {
  int a = 0 * pow(10, 0);
  ck_assert_int_eq(s21_abs(a), abs(a));
}
END_TEST

START_TEST(s21_abs_max_int) {
  int a = INT_MAX;
  ck_assert_int_eq(s21_abs(a), abs(a));
}
END_TEST

START_TEST(s21_abs_min_int) {
  int a = INT_MIN;
  ck_assert_int_eq(s21_abs(a), abs(a));
}
END_TEST

TCase *s21_tc_abs(void) {
  TCase *tc_abs = tcase_create("s21_abs");

  tcase_add_test(tc_abs, s21_abs_positive);
  tcase_add_test(tc_abs, s21_abs_negative);
  tcase_add_test(tc_abs, s21_abs_null);
  tcase_add_test(tc_abs, s21_abs_max_int);
  tcase_add_test(tc_abs, s21_abs_min_int);

  return tc_abs;
}
