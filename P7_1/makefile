main: main.cpp dLL.o item.o
	g++  -o main main.cpp dLL.o item.o
	
dLL.o: dLL.cpp dLL.h
	g++  -c dLL.cpp
	
item.o: item.cpp item.h
	g++  -c item.cpp
	
run: main
	./main

clean: 
	rm main *.o