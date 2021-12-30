Fraction.out : test_fraction.cc fraction.cc
	g++ fraction.cc test_fraction.cc -o Fraction.out -lgtest -lgtest_main -lpthread

run: Fraction.out
	./Fraction.out

coverage : test_fraction.cc fraction.cc
	g++ -fprofile-arcs -ftest-coverage fraction.cc test_fraction.cc -o Fraction.out -lgtest -lgtest_main -lpthread -o Fraction.out
	./Fraction.out 
	gcov -a fraction.cc

clean:
	rm -rf *.o* *.gcno *.gcda *.gcov