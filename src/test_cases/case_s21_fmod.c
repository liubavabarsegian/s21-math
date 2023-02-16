#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_fmod_test_1) {
  double x = NAN;
  double y = NAN;
  ck_assert_ldouble_nan(s21_fmod(x, y));
  ck_assert_ldouble_nan(fmod(x, y));
}
END_TEST

START_TEST(s21_fmod_test_2) {
  double x = -INFINITY;
  double y = -INFINITY;
  ck_assert_ldouble_nan(s21_fmod(x, y));
  ck_assert_ldouble_nan(fmod(x, y));
}
END_TEST

START_TEST(s21_fmod_test_3) {
  double x = -INFINITY;
  double y = INFINITY;
  ck_assert_ldouble_nan(s21_fmod(x, y));
  ck_assert_ldouble_nan(fmod(x, y));
}
END_TEST

START_TEST(s21_fmod_test_4) {
  double x = INFINITY;
  double y = INFINITY;
  ck_assert_ldouble_nan(s21_fmod(x, y));
  ck_assert_ldouble_nan(fmod(x, y));
}
END_TEST

START_TEST(s21_fmod_test_5) {
  double x = NAN;
  double y = INFINITY;
  ck_assert_ldouble_nan(s21_fmod(x, y));
  ck_assert_ldouble_nan(fmod(x, y));
}
END_TEST

START_TEST(s21_fmod_test_6) {
  double x = -INFINITY;
  double y = NAN;
  ck_assert_ldouble_nan(s21_fmod(x, y));
  ck_assert_ldouble_nan(fmod(x, y));
}
END_TEST

START_TEST(s21_fmod_test_7) {
  double x = NAN;
  double y = -INFINITY;
  ck_assert_ldouble_nan(s21_fmod(x, y));
  ck_assert_ldouble_nan(fmod(x, y));
}
END_TEST

START_TEST(s21_fmod_test_8) {
  double x = INFINITY;
  double y = NAN;
  ck_assert_ldouble_nan(s21_fmod(x, y));
  ck_assert_ldouble_nan(fmod(x, y));
}
END_TEST

START_TEST(s21_fmod_test_9) {
  double x = INFINITY;
  double y = -INFINITY;
  ck_assert_ldouble_nan(s21_fmod(x, y));
  ck_assert_ldouble_nan(fmod(x, y));
}
END_TEST

START_TEST(s21_fmod_test_10) {
  double x = INFINITY;
  double y = 3;
  ck_assert_ldouble_nan(s21_fmod(x, y));
  ck_assert_ldouble_nan(fmod(x, y));
}
END_TEST

START_TEST(s21_fmod_test_11) {
  double x = -INFINITY;
  double y = 2;
  ck_assert_ldouble_nan(s21_fmod(x, y));
  ck_assert_ldouble_nan(fmod(x, y));
}
END_TEST

START_TEST(s21_fmod_test_12) {
  double x = NAN;
  double y = 1;
  ck_assert_ldouble_nan(s21_fmod(x, y));
  ck_assert_ldouble_nan(fmod(x, y));
}
END_TEST

START_TEST(s21_fmod_test_13) {
  double x = 100;
  double y = INFINITY;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_fmod_test_14) {
  double x = 100;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_fmod_test_15) {
  double x = 0;
  double y = INFINITY;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_fmod_test_16) {
  double x = 0;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_fmod_test_17) {
  double x = 0;
  double y = NAN;
  ck_assert_ldouble_nan(s21_fmod(x, y));
  ck_assert_ldouble_nan(fmod(x, y));
}
END_TEST

START_TEST(s21_fmod_test_18) {
  double x = INFINITY;
  double y = 0;
  ck_assert_ldouble_nan(s21_fmod(x, y));
  ck_assert_ldouble_nan(fmod(x, y));
}
END_TEST

START_TEST(s21_fmod_test_19) {
  double x = -INFINITY;
  double y = 0;
  ck_assert_ldouble_nan(s21_fmod(x, y));
  ck_assert_ldouble_nan(fmod(x, y));
}
END_TEST

START_TEST(s21_fmod_test_20) {
  double x = NAN;
  double y = 0;
  ck_assert_ldouble_nan(s21_fmod(x, y));
  ck_assert_ldouble_nan(fmod(x, y));
}
END_TEST

START_TEST(s21_fmod_test_MAIN) {
  long double f_value[] = {4234, 20,      234,    -756,   435,    24.342, 345,
                           645,  2.24234, 53.534, 6456,   1,      0,      -1,
                           34,   64,      9786,   534.53, 756.56, 754};
  long double s_value[] = {8898.07,  6881.63, 1537.52, 5783.31, 2675.7,
                           5560.06,  1240.69, 9348.66, 103.02,  4153.9,
                           250,      29.3,    96.456,  86,      29.5,
                           302.0234, 1,       1947.38, 953,     42};
  for (int i = 0; i < 20; i++) {
    ck_assert_ldouble_eq_tol(s21_fmod(f_value[i], s_value[i]),
                            fmod(f_value[i], s_value[i]), TEST_EPS);
  }
}

TCase *s21_tc_fmod(void) {
  TCase *tc_fmod = tcase_create("s21_fmod");

  tcase_add_test(tc_fmod, s21_fmod_test_1);
  tcase_add_test(tc_fmod, s21_fmod_test_2);
  tcase_add_test(tc_fmod, s21_fmod_test_3);
  tcase_add_test(tc_fmod, s21_fmod_test_4);
  tcase_add_test(tc_fmod, s21_fmod_test_5);
  tcase_add_test(tc_fmod, s21_fmod_test_6);
  tcase_add_test(tc_fmod, s21_fmod_test_7);
  tcase_add_test(tc_fmod, s21_fmod_test_8);
  tcase_add_test(tc_fmod, s21_fmod_test_9);
  tcase_add_test(tc_fmod, s21_fmod_test_10);
  tcase_add_test(tc_fmod, s21_fmod_test_11);
  tcase_add_test(tc_fmod, s21_fmod_test_12);
  tcase_add_test(tc_fmod, s21_fmod_test_13);
  tcase_add_test(tc_fmod, s21_fmod_test_14);
  tcase_add_test(tc_fmod, s21_fmod_test_15);
  tcase_add_test(tc_fmod, s21_fmod_test_16);
  tcase_add_test(tc_fmod, s21_fmod_test_17);
  tcase_add_test(tc_fmod, s21_fmod_test_18);
  tcase_add_test(tc_fmod, s21_fmod_test_19);
  tcase_add_test(tc_fmod, s21_fmod_test_20);
  tcase_add_test(tc_fmod, s21_fmod_test_MAIN);
  
  return tc_fmod;
}
