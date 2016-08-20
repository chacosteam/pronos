CFLAGS=-std=c++11 -c
DEBUG=-g

dataset.o: dataset.cpp dataset.h
	g++ $(CFLAGS) $(DEBUG) dataset.cpp -o dataset.o
datafile.o: datafile.cpp datafile.h
	g++ $(CFLAGS) $(DEBUG) datafile.cpp -o datafile.o
main: dataset.o
	g++ *.o -o main 
