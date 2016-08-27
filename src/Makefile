CFLAGS=-std=c++11 -c
DEBUG=-g

clean:
	rm -f *.o ./main
dataset.o: dataset.cpp dataset.h
	g++ $(CFLAGS) $(DEBUG) dataset.cpp -o dataset.o
datafile.o: datafile.cpp datafile.h
	g++ $(CFLAGS) $(DEBUG) datafile.cpp -o datafile.o
main.o: main.cpp
	g++ $(CFLAGS) $(DEBUG) main.cpp -o main.o
storage.o: storage.cpp storage.h
	g++ $(CFLAGS) $(DEBUG) storage.cpp -o storage.o
main: main.o dataset.o datafile.o storage.o
	g++ *.o -o main 
