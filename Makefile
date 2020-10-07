run: main.o
	g++ -Wall -pedantic -g -o run main.o

main.o: main.cpp 
	g++ -Wall -pedantic -g -std=c++11 -c main.cpp

clean:
	rm -rf run main.o
