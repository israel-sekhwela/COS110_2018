main: vehicle.o dieselLocomotive.o main.o
	g++ vehicle.o dieselLocomotive.o main.o -o main

vehicle.o: vehicle.cpp vehicle.h
	g++ -c vehicle.cpp

dieselLocomotive.o: dieselLocomotive.cpp dieselLocomotive.h
	g++ -c dieselLocomotive.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o main

run: main
	./main
