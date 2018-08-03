CC = g++
CFLAGS = -Werror -Wextra -Wall -static

main: main.cpp item.o order.o
	$(CC) $(CFLAGS) -o main main.cpp item.o order.o
	
item.o: item.cpp item.h
	$(CC) $(CFLAGS) -c item.cpp
	
order.o: order.cpp order.h
	$(CC) $(CFLAGS) -c order.cpp

run: main
	./main

clean: 
	rm main *.o