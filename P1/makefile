CC = g++
CFLAGS = -c -Werror -Wall -Wextra

baseMatrix: main.o baseMatrix.o
	$(CC) main.o baseMatrix.o -o baseMatrix

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

baseMatrix.o: baseMatrix.cpp baseMatrix.h
	$(CC) $(CFLAGS) baseMatrix.cpp

run:
	./baseMatrix

clean:
	rm -rf *.o baseMatrix
