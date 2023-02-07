#CMPLR = gcc -std=c11 -pedantic -Wall -Werror -Wextra -fsanitize=undefined -g
#CMPLR = gcc -std=c11 -pedantic -Wall -Werror -Wextra
CMPLR = gcc -std=c11 -Wall -Werror -Wextra -g
#CMPLR = gcc -std=c11 -Wall -Werror -Wextra
TEST_FLAGS = -lcheck -lm -lsubunit
GCOV_FALGS = -ftest-coverage -fprofile-arcs
#GCOV_FALGS = --coverage

all : s21_math.a

test : test.o s21_math.a
	$(CMPLR) test.o s21_math.a $(TEST_FLAGS) -o test

s21_math.a : s21_abs.o s21_fabs.o
	ar rc s21_math.a s21_abs.o s21_fabs.o
	ranlib s21_math.a

gcov_report :
	$(CMPLR) $(GCOV_FALGS) test.c s21_abs.c s21_fabs.c $(TEST_FLAGS) -o test
	./test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open report/index.html

test.o : test.c s21_math.h
	$(CMPLR) -c test.c

s21_abs.o : s21_abs.c s21_math.h
	$(CMPLR) -c s21_abs.c
	
s21_fabs.o : s21_fabs.c s21_math.h
	$(CMPLR) -c s21_fabs.c

clean :
	rm -rf *.o *.a test *.gcno *.gcda *.info report

rebuild : clean all