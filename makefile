CXX = g++
CC = g++
FLAGS = -std=c++11

all:            main

main: main.cpp Transaction.o Date.o Deposit.o Withdrawal.o Fee.o
	$(CXX) $(FLAGS) main.cpp Transaction.o Date.o Deposit.o Withdrawal.o Fee.o -o main

Transaction.o: Transaction.cpp Transaction.h
	$(CXX) $(FLAGS) -c Transaction.cpp

Date.o: Date.cpp Date.h
	$(CXX) $(FLAGS) -c Date.cpp

Deposit.o: Deposit.o Deposit.h
	$(CXX) $(FLAGS) -c Deposit.cpp
	
Withdrawal.o:Withdrawal.o Withdrawal.h
	$(CXX) $(FLAGS) -c Withdrawal.cpp

Fee.o: Fee.o Fee.h
	$(CXX) $(FLAGS) -c Fee.cpp

clobber:
	rm -f *.o *.exe core main

