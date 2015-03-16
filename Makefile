LD_FLAG = -lpthread -std=c++11
LIB_FLAG = -L ./lib

# Google Test
GTEST_LD = -lgtest -lgtest_main
GTEST_INCLUDE = -I ./lib/gtest/include

all : tests

clean :
	rm -rf *.o

tests.o :
	g++ ./test/tests.cc $(GTEST_INCLUDE) $(GTEST_LD) $(LIB_FLAG) $(LD_FLAG) -o ./tests.o
	chmod +x ./tests.o

tests : tests.o
	./tests.o
