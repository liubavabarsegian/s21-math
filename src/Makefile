CMPLR = gcc -std=c11 -Wall -Werror -Wextra
TEST_FLAGS = -lcheck -lm -lsubunit
GCOV_FALGS = -ftest-coverage -fprofile-arcs

all : s21_math.a

s21_math.a :
	$(CMPLR) -c s21_abs.c
	$(CMPLR) -c s21_exp.c
	$(CMPLR) -c s21_fabs.c
	ar rc s21_math.a s21_abs.o s21_exp.o s21_fabs.o
	ranlib s21_math.a

test : tcase s21_math.a
	$(CMPLR) -c test.c
	$(CMPLR) *.o s21_math.a $(TEST_FLAGS) -o test

gcov_report : tcase
	$(CMPLR) $(GCOV_FALGS) -c test.c
	$(CMPLR) $(GCOV_FALGS) -c s21_abs.c
	$(CMPLR) $(GCOV_FALGS) -c s21_exp.c
	$(CMPLR) $(GCOV_FALGS) -c s21_fabs.c
	$(CMPLR) $(GCOV_FALGS) *.o $(TEST_FLAGS) -o test
	./test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open report/index.html

tcase :
	$(CMPLR) -c ./test_cases/case_s21_abs.c
	$(CMPLR) -c ./test_cases/case_s21_exp.c
	$(CMPLR) -c ./test_cases/case_s21_fabs.c
#add new test_cases for other functions here

check_style:
	cp ../materials/linters/.clang-format ../src
	clang-format -n -style=google *.c *.h

correct_style:
	cp ../materials/linters/.clang-format ../src
	clang-format -i -style=google *.c *.h

clean :
	rm -rf *.o *.a test *.gcno *.gcda *.info report

rebuild : clean all