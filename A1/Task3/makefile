main: main.o Location.o MovieFile.o UserRequest.o Server.o
	g++ -o main main.o Location.o MovieFile.o UserRequest.o Server.o

main.o: main.cpp Location.h MovieFile.h UserRequest.h Server.h
	g++ -c -g main.cpp

Location.o: Location.h Location.cpp
	g++ -c -g Location.cpp
	
MovieFile.o : MovieFile.h MovieFile.cpp
	g++ -c -g MovieFile.cpp

UserRequest.o : UserRequest.h UserRequest.cpp
	g++ -c -g UserRequest.cpp

Server.o : Server.h Server.cpp
	g++ -c -g Server.cpp

run:	main
	./main

valgrind:
	valgrind ./main	
	
clean:
	rm *.o main

