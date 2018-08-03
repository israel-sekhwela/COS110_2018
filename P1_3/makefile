main: main.cpp map.o
	g++ -std=c++11 -static -o main main.cpp map.o
	
map.o: map.cpp map.h
	g++ -std=c++11 -static -c map.cpp
	
run: main
	./main

clean: 
	rm main *.o