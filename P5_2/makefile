main: weaponMount.o weapon.o laserCannon.o ionCannon.o main.o
	g++ weaponMount.o weapon.o laserCannon.o ionCannon.o main.o -o main

weaponMount.o: weaponMount.cpp weaponMount.h
	g++   -c weaponMount.cpp

weapon.o: weapon.cpp weapon.h
	g++ -c weapon.cpp

laserCannon.o: laserCannon.cpp laserCannon.h
	g++ -c laserCannon.cpp

ionCannon.o: ionCannon.cpp ionCannon.h
	g++  -c ionCannon.cpp

main.o: main.cpp 
	g++ -c main.cpp

clean:
	rm *.o main 
	
run: main
	./main
