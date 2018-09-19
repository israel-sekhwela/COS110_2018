SubstitutionCipher.o: Cipher.h SubstitutionCipher.h SubstitutionCipher.cpp
	g++ -c SubstitutionCipher.cpp

exception.o: Cipher.h exception.h exception.cpp
	g++ -c exception.cpp

Vigenere.o: Cipher.h Vigenere.h Vigenere.cpp
	g++ -c Vigenere.cpp

main.o: main.cpp
	g++ -c main.cpp

main: main.o SubstitutionCipher.o exception.o Vigenere.o
	g++ -o main.o SubstitutionCipher.o exception.o Vigenere.o -o main

clean:
	rm *.o main

ready:
	tar -cvz Cipher.h SubstitutionCipher.h SubstitutionCipher.cpp exception.h exception.cpp Vigenere.h Vigenere.cpp -f task1.tar

run: main
	./main