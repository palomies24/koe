GTEST_DIR=/u/b/e1401156/kurssit_4/embedded_system_programming/googletest/googletest

my_test: test_case.c linkedlist.c linkedlist.h Gtest_main.c libgtest.a
	g++ -isystem $(GTEST_DIR)/include --coverage -g -pthread test_case.c linkedlist.c Gtest_main.c libgtest.a -o my_test 

libgtest.a:
	g++ -isystem $(GTEST_DIR)/include -I$(GTEST_DIR) -pthread -c $(GTEST_DIR)/src/gtest-all.cc
	ar -rv libgtest.a gtest-all.o

clean:
	rm -f mytest *.o libgtest.a
