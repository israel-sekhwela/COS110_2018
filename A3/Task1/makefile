main: Cipher.o SubstitutionCipher.o Vigenere.o  main.o
	g++ Cipher.o SubstitutionCipher.o Vigenere.o  main.o -o main  

Cipher.o: Cipher.cpp Cipher.h
	g++ -c Cipher.cpp


SubstitutionCipher.o: SubstitutionCipher.cpp SubstitutionCipher.h
	g++ -c SubstitutionCipher.cpp

Vigenere.o: Vigenere.cpp Vigenere.h
	g++ -c Vigenere.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o main 
	
run: main
	./main