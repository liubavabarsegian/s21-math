CMPLR = gcc -std=c11 -Wall -Werror -Wextra
TEST_FLAGS = -lcheck -lm -lsubunit
GCOV_FLAGS = -ftest-coverage -fprofile-arcs

all : s21_math.a

s21_math.a :
	$(CMPLR) -c s21_abs.c
	$(CMPLR) -c s21_exp.c
	$(CMPLR) -c s21_fabs.c
	$(CMPLR) -c s21_floor.c
	$(CMPLR) -c s21_ceil.c
	$(CMPLR) -c s21_sin.c
	$(CMPLR) -c s21_cos.c
	$(CMPLR) -c s21_tan.c
#add new fuction here
	ar rc s21_math.a *.o
	ranlib s21_math.a

test : tcase s21_math.a
	$(CMPLR) -c test.c
	$(CMPLR) *.o s21_math.a $(TEST_FLAGS) -o test

gcov_report : tcase
	$(CMPLR) $(GCOV_FLAGS) -c test.c
	$(CMPLR) $(GCOV_FLAGS) -c s21_abs.c
	$(CMPLR) $(GCOV_FLAGS) -c s21_exp.c
	$(CMPLR) $(GCOV_FLAGS) -c s21_fabs.c
	$(CMPLR) $(GCOV_FLAGS) -c s21_floor.c
	$(CMPLR) $(GCOV_FLAGS) -c s21_ceil.c
	$(CMPLR) $(GCOV_FLAGS) -c s21_sin.c
	$(CMPLR) $(GCOV_FLAGS) -c s21_cos.c
	$(CMPLR) $(GCOV_FLAGS) -c s21_tan.c
#add new fuction here
	$(CMPLR) $(GCOV_FLAGS) *.o $(TEST_FLAGS) -o test
	./test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open report/index.html

tcase :
	$(CMPLR) -c ./test_cases/case_s21_abs.c
	$(CMPLR) -c ./test_cases/case_s21_exp.c
	$(CMPLR) -c ./test_cases/case_s21_fabs.c
	$(CMPLR) -c ./test_cases/case_s21_floor.c
	$(CMPLR) -c ./test_cases/case_s21_ceil.c
	$(CMPLR) -c ./test_cases/case_s21_sin.c
	$(CMPLR) -c ./test_cases/case_s21_cos.c
	$(CMPLR) -c ./test_cases/case_s21_tan.c
#add new test_cases for other functions here

check_style:
#cp ../materials/linters/.clang-format ../src
	clang-format -n -style=google *.c *.h test_cases/*.c

correct_style:
#cp ../materials/linters/.clang-format ../src
	clang-format -i -style=google *.c *.h test_cases/*.c

clean :
	rm -rf *.o *.a test *.gcno *.gcda *.info report

rebuild : clean all
