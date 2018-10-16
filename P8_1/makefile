main: stackNode.o resrcStack.o main.o
	g++ -o main  stackNode.o resrcStack.o main.o
	
main.o: main.cpp
	g++ -c main.cpp
	
resrcStack.o: resrcStack.h resrcStack.cpp
	g++ -c resrcStack.cpp
	
stackNode.o: stackNode.h stackNode.cpp
	g++ -c stackNode.cpp
	
run: main
	./main
	
clean:
	rm *.o main
	
ready:
	tar -cf P8_1.tar.gz *.h *.cpp makefile