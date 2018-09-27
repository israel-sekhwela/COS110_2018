#include "Columnar.h"

Columnar::Columnar(const string& s){
	//this->codeword = s;
	this->setCodeword(s);
}

Columnar :: ~Columnar(){
	// for(int i = 0; i < permutation.length(); i++){
	// 	delete [] permutation[i]
	// }
	delete [] permutation;
	permutation = 0;
}

void Columnar::setCodeword(const string& s){
	string	str;
	int 	same;
	int 	duplicate;
	int 	position;
	int 	_permutation;
	int 	count;
	char 	temp;
	

	codeword = "";
	str = "";
	same = 0;
	duplicate = 0;
	position = 0;
	_permutation = 0;
	count = 0;
	str = TranspositionCipher::removeSpaces(s);
	
	size = 0;
	while(s[size] != '\0'){
		if(s[size + 1] && s[size] == s[size + 1]){
			duplicate = duplicate + 1;
		}
		size =  size + 1;
	}

	size = 0;
	while(str[size] != '\0'){
		if(str[size + 1] && str[size] == str[size + 1]){
			same = same + 1;
		}
		if(str[size]!=' '){
			size = size + 1;
		}
	}

	if((duplicate > 0) || (size < 2)){
		Exception str("The codeword provided is not going to generate a safe encryption");
		throw (str);
	}
	else{
		int i = 0;
		while(i < size){
			codeword = codeword + str[i];
			i = i + 1;
		}

		i = 0;
		while(i < size){
			for (int j = 0; j < size; j++){
				if(int(str[i]) < int(str[j])){
					temp = str[i];
					str[i] = str[j];
					str[j] = temp;
				}
			}
			i =  i + 1;
		}

		permutation = new int[size];
		for(int i = 0; i < size;){
			count = i + 1;
			while(str[i] == str[count]){
				count = count + 1;
			}
			for(int j = 0; j < size; j++){
				if(codeword[j] == str[count - 1]){
					permutation[j] = _permutation;
				}
			}
			_permutation = _permutation + 1;
			i = count;
		}
	}
}

string Columnar::scramble(const string& s){
	int count;
	int position;
	int scramber_counter;
	string str;

	position = 0;
	length = size;
	str = "";

	count = 0;
	while(s[count] != '\0'){
		count++;
	}

	while(length < count){
		length = length + size;
	}

	characters = new char*[length / size];
	int i = 0;
	while(i < (length / size)){
		characters[i] = new char[size];
		for(int j=0; j < size; j++){
			if (s[position]){
				characters[i][j] = s[position++];
			}
			else{
				characters[i][j] = 'A';
			}
		}
		i = i + 1;
	}

	scramber_counter = 0;
	while(scramber_counter < size){
		for(int i = 0; i < (length / size); i++){
			for(int j = 0; j < size; j++){
				if(permutation[j] == scramber_counter){
					str = str + characters[i][j];
				}		
			}
		}
		scramber_counter = scramber_counter + 1;
	}

	int counter = 0;
	while(counter < (length / size)){
		delete [] characters[counter];
		counter++;
	}
	delete [] characters;
	characters = 0;

	return (str);
}

string Columnar::unscramble(const string& s){
	string str;
	int position;
	int scramber_counter;
	int count;
	
	str = "";
	position = 0;
	
	count = 0;
	while(s[count] != '\0'){
		count++;
	}

	if(count != length){
		Exception str("The ciphertext is of incorrect length");
		throw (str);
	}
	else{
		characters = new char*[length / size];
		int i = 0;
		while(i < (length / size)){
			characters[i] = new char[size];
			i = i + 1;
		}

		scramber_counter = 0;
		while(scramber_counter<size){
			for(int i = 0; i < (length / size); i++){
				for (int j = 0; j < size; j++){
					if (permutation[j]==scramber_counter){
						characters[i][j] = s[position++];
					}
				}
			}
			scramber_counter = scramber_counter + 1;	
		}

		int counter = 0;
		while(counter < (length / size)){
			for(int j=0; j < size; j++){
				str = str + characters[counter][j];
			}
			counter = counter + 1;
		}

		counter = 0;
		while(counter < (length / size)){
			delete [] characters[counter];
			counter = counter + 1;
		}
		delete [] characters;
		characters = 0;
	}
	return (str);
}