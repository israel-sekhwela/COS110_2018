CC = g++
CFLAGS = 

main: main.cpp Location.o MovieFile.o
	$(CC) $(CFLAGS) -o main main.cpp Location.o MovieFile.o

Location.o: Location.cpp Location.h
	$(CC) $(CFLAGS) -c Location.cpp

MovieFile.o: MovieFile.cpp MovieFile.h
	$(CC) $(CFLAGS) -c MovieFile.cpp

run: main
	./main

clean:
	rm main *.o