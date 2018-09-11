main: main.o richMatrix.o
	g++  -o main main.o richMatrix.o

main.o: main.cpp richMatrix.h
	g++ -c main.cpp

richMatrix.o: richMatrix.cpp richMatrix.h
	g++ -c richMatrix.cpp

run: main
	./main

clean:
	rm *.o