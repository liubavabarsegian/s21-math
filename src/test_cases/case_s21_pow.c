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
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  // ck_assert_ldouble_infinite(s21_pow(x, y));
  // ck_assert_ldouble_infinite(pow(x, y));
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
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  // ck_assert_ldouble_infinite(s21_pow(x, y));
  // ck_assert_ldouble_infinite(pow(x, y));
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
  double y = -NAN;
  ck_assert_ldouble_nan(s21_pow(x, y));
  ck_assert_ldouble_nan(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_22) {
  double x = 0;
  double y = 0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_23) {
  double x = 0;
  double y = 0.4;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_24) {
  double x = 0;
  double y = 2;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_25) {
  double x = 0;
  double y = 2.5;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_26) {
  double x = 0;
  double y = 3;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_27) {
  double x = 0;
  double y = -0.4;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_28) {
  double x = 0;
  double y = -2;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_29) {
  double x = 0;
  double y = -2.5;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_30) {
  double x = 0;
  double y = -3;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_31) {
  double x = 16894.2629;
  double y = 1545;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_32) {
  double x = 16894.2629;
  double y = -1545;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_33) {
  double x = -16894.2629;
  double y = 1545;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_34) {
  double x = -16894.2629;
  double y = -1545;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_35) {
  double x = -1;
  double y = INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_36) {
  double x = -1;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_85) {
  double x = -1;
  double y = 0.5;
  ck_assert_ldouble_nan(s21_pow(x, y));
  ck_assert_ldouble_nan(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_86) {
  double x = -1;
  double y = 2.5;
  ck_assert_ldouble_nan(s21_pow(x, y));
  ck_assert_ldouble_nan(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_87) {
  double x = -1;
  double y = 3;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_88) {
  double x = -1;
  double y = -0.5;
  ck_assert_ldouble_nan(s21_pow(x, y));
  ck_assert_ldouble_nan(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_89) {
  double x = -1;
  double y = -2.5;
  ck_assert_ldouble_nan(s21_pow(x, y));
  ck_assert_ldouble_nan(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_90) {
  double x = -1;
  double y = -3;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_91) {
  double x = -1;
  double y = -2;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_92) {
  double x = -1;
  double y = 2;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_37) {
  double x = 1;
  double y = NAN;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_38) {
  double x = 1;
  double y = -NAN;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_39) {
  double x = 1;
  double y = INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_40) {
  double x = 1;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_41) {
  double x = 1;
  double y = 0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_42) {
  double x = 1;
  double y = 0.4;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_43) {
  double x = 1;
  double y = 2;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_44) {
  double x = 1;
  double y = 2.5;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_45) {
  double x = 1;
  double y = 3;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_46) {
  double x = 1;
  double y = -0.4;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_47) {
  double x = 1;
  double y = -2;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_48) {
  double x = 1;
  double y = -2.5;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_49) {
  double x = 1;
  double y = -3;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_50) {
  double x = -NAN;
  double y = 0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_51) {
  double x = 0.4;
  double y = 0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_52) {
  double x = 2;
  double y = 0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_53) {
  double x = 2.5;
  double y = 0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_54) {
  double x = 3;
  double y = 0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_55) {
  double x = -0.4;
  double y = 0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_56) {
  double x = -2;
  double y = 0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_57) {
  double x = -2.5;
  double y = 0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_58) {
  double x = -3;
  double y = 0;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_59) {
  double x = -0.4;
  double y = INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_60) {
  double x = 0.4;
  double y = INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_10) {
  double x = -INFINITY;
  double y = INFINITY;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  // ck_assert_ldouble_infinite(s21_pow(x, y));
  // ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_61) {
  double x = -2.4;
  double y = INFINITY;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_62) {
  double x = 2.4;
  double y = INFINITY;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_63) {
  double x = -0.4;
  double y = -INFINITY;
  //ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_64) {
  double x = 0.4;
  double y = -INFINITY;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_65) {
  double x = -2.4;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_66) {
  double x = 2.4;
  double y = -INFINITY;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_67) {
  double x = INFINITY;
  double y = 0.4;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_68) {
  double x = INFINITY;
  double y = 2;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_69) {
  double x = INFINITY;
  double y = 2.5;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_70) {
  double x = INFINITY;
  double y = 3;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_71) {
  double x = INFINITY;
  double y = -0.4;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_72) {
  double x = INFINITY;
  double y = -2;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_73) {
  double x = INFINITY;
  double y = -2.5;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_74) {
  double x = INFINITY;
  double y = -3;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_75) {
  double x = -INFINITY;
  double y = 0.4;
  //ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_76) {
  double x = -INFINITY;
  double y = 2;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_77) {
  double x = -INFINITY;
  double y = 2.5;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_78) {
  double x = -INFINITY;
  double y = 3;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_79) {
  double x = -INFINITY;
  double y = -0.4;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_80) {
  double x = -INFINITY;
  double y = -2;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_81) {
  double x = -INFINITY;
  double y = -2.5;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_82) {
  double x = -INFINITY;
  double y = -3;
  ck_assert_ldouble_eq_tol(s21_pow(x, y), pow(x, y), TEST_EPS);
}
END_TEST

START_TEST(s21_pow_test_83) {
  double x = 0.4;
  double y = -9999;
  ck_assert_ldouble_eq(s21_pow(x, y), pow(x, y));
  //ck_assert_ldouble_infinite(s21_pow(x, y));
  //ck_assert_ldouble_infinite(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_84) {
  double x = -20;
  double y = -0.4;
  ck_assert_ldouble_nan(s21_pow(x, y));
  ck_assert_ldouble_nan(pow(x, y));
}
END_TEST

START_TEST(s21_pow_test_93) {
  double x = -20;
  double y = -1.4;
  ck_assert_ldouble_nan(s21_pow(x, y));
  ck_assert_ldouble_nan(pow(x, y));
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
  tcase_add_test(tc_pow, s21_pow_test_26);
  tcase_add_test(tc_pow, s21_pow_test_27);
  tcase_add_test(tc_pow, s21_pow_test_28);
  tcase_add_test(tc_pow, s21_pow_test_29);
  tcase_add_test(tc_pow, s21_pow_test_30);
  tcase_add_test(tc_pow, s21_pow_test_31);
  tcase_add_test(tc_pow, s21_pow_test_32);
  tcase_add_test(tc_pow, s21_pow_test_33);
  tcase_add_test(tc_pow, s21_pow_test_34);
  tcase_add_test(tc_pow, s21_pow_test_35);
  tcase_add_test(tc_pow, s21_pow_test_36);
  tcase_add_test(tc_pow, s21_pow_test_37);
  tcase_add_test(tc_pow, s21_pow_test_38);
  tcase_add_test(tc_pow, s21_pow_test_39);
  tcase_add_test(tc_pow, s21_pow_test_40);
  tcase_add_test(tc_pow, s21_pow_test_41);
  tcase_add_test(tc_pow, s21_pow_test_42);
  tcase_add_test(tc_pow, s21_pow_test_43);
  tcase_add_test(tc_pow, s21_pow_test_44);
  tcase_add_test(tc_pow, s21_pow_test_45);
  tcase_add_test(tc_pow, s21_pow_test_46);
  tcase_add_test(tc_pow, s21_pow_test_47);
  tcase_add_test(tc_pow, s21_pow_test_48);
  tcase_add_test(tc_pow, s21_pow_test_49);
  tcase_add_test(tc_pow, s21_pow_test_50);
  tcase_add_test(tc_pow, s21_pow_test_51);
  tcase_add_test(tc_pow, s21_pow_test_52);
  tcase_add_test(tc_pow, s21_pow_test_53);
  tcase_add_test(tc_pow, s21_pow_test_54);
  tcase_add_test(tc_pow, s21_pow_test_55);
  tcase_add_test(tc_pow, s21_pow_test_56);
  tcase_add_test(tc_pow, s21_pow_test_57);
  tcase_add_test(tc_pow, s21_pow_test_58);
  tcase_add_test(tc_pow, s21_pow_test_59);
  tcase_add_test(tc_pow, s21_pow_test_60);
  tcase_add_test(tc_pow, s21_pow_test_61);
  tcase_add_test(tc_pow, s21_pow_test_62);
  tcase_add_test(tc_pow, s21_pow_test_63);
  tcase_add_test(tc_pow, s21_pow_test_64);
  tcase_add_test(tc_pow, s21_pow_test_65);
  tcase_add_test(tc_pow, s21_pow_test_66);
  tcase_add_test(tc_pow, s21_pow_test_67);
  tcase_add_test(tc_pow, s21_pow_test_68);
  tcase_add_test(tc_pow, s21_pow_test_69);
  tcase_add_test(tc_pow, s21_pow_test_70);
  tcase_add_test(tc_pow, s21_pow_test_71);
  tcase_add_test(tc_pow, s21_pow_test_72);
  tcase_add_test(tc_pow, s21_pow_test_73);
  tcase_add_test(tc_pow, s21_pow_test_74);
  tcase_add_test(tc_pow, s21_pow_test_75);
  tcase_add_test(tc_pow, s21_pow_test_76);
  tcase_add_test(tc_pow, s21_pow_test_77);
  tcase_add_test(tc_pow, s21_pow_test_78);
  tcase_add_test(tc_pow, s21_pow_test_79);
  tcase_add_test(tc_pow, s21_pow_test_80);
  tcase_add_test(tc_pow, s21_pow_test_81);
  tcase_add_test(tc_pow, s21_pow_test_82);
  tcase_add_test(tc_pow, s21_pow_test_83);
  tcase_add_test(tc_pow, s21_pow_test_84);
  tcase_add_test(tc_pow, s21_pow_test_85);
  tcase_add_test(tc_pow, s21_pow_test_86);
  tcase_add_test(tc_pow, s21_pow_test_87);
  tcase_add_test(tc_pow, s21_pow_test_88);
  tcase_add_test(tc_pow, s21_pow_test_89);
  tcase_add_test(tc_pow, s21_pow_test_90);
  tcase_add_test(tc_pow, s21_pow_test_91);
  tcase_add_test(tc_pow, s21_pow_test_92);
  tcase_add_test(tc_pow, s21_pow_test_93);
  
  return tc_pow;
}
