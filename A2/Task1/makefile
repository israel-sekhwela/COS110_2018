main : main.o gladiator.o trax.o murmillo.o retiarius.o dimachaerus.o
	g++ -o main main.o gladiator.o trax.o murmillo.o retiarius.o dimachaerus.o

main.o : main.cpp gladiator.h trax.h murmillo.h retiarius.h dimachaerus.h
	g++ -c -g main.cpp

gladiator.o : gladiator.h gladiator.cpp
	g++ -c -g gladiator.cpp
	
trax.o : trax.h trax.cpp
	g++ -c -g trax.cpp
	
murmillo.o : murmillo.h murmillo.cpp
	g++ -c -g murmillo.cpp
	
retiarius.o : retiarius.h retiarius.cpp
	g++ -c -g retiarius.cpp

dimachaerus.o: dimachaerus.h dimachaerus.cpp
	g++ -c -g dimachaerus.cpp

run : main
	./main

valgrind : valgrind ./main

clean :
	rm *.o main
