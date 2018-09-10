main : main.o gladiator.o trax.o murmillo.o retiarius.o dimachaerus.o team.o
	g++ -o main main.o gladiator.o trax.o murmillo.o retiarius.o dimachaerus.o team.o

main.o : main.cpp gladiator.h trax.h murmillo.h retiarius.h dimachaerus.h team.h
	g++ -c main.cpp

team.o : team.cpp team.h
	g++ -c team.cpp
	
gladiator.o : gladiator.h gladiator.cpp
	g++ -c gladiator.cpp
	
trax.o : trax.h trax.cpp
	g++ -c trax.cpp
	
murmillo.o : murmillo.h murmillo.cpp
	g++ -c murmillo.cpp
	
retiarius.o : retiarius.h retiarius.cpp
	g++ -c retiarius.cpp

dimachaerus.o: dimachaerus.h dimachaerus.cpp
	g++ -c dimachaerus.cpp

run : main
	./main

clean :
	rm *.o main
