CC = g++
CFLAGS =

main: main.cpp Location.o MovieFile.o UserRequest.o
	$(CC) $(CFLAGS) -o main main.cpp Location.o MovieFile.o UserRequest.o

Location.o: Location.cpp Location.h
	$(CC) $(CFLAGS) -c Location.cpp

MovieFile.o: MovieFile.cpp MovieFile.h
	$(CC) $(CFLAGS) -c MovieFile.cpp

UserRequest.o: UserRequest.cpp UserRequest.h
	$(CC) $(CFLAGS) -c UserRequest.cpp

run: main
	./main

clean:
	rm main *.o