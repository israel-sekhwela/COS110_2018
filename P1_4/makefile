main: main.cpp combiner.o
	g++ -std=c++11 -static -o main main.cpp combiner.o
	
combiner.o: combiner.cpp combiner.h
	g++ -std=c++11 -static -c combiner.cpp
	
run: combiner
	./combiner

clean: 
	rm combiner *.o