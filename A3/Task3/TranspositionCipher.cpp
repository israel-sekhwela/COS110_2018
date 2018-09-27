#include "TranspositionCipher.h"

string TranspositionCipher::encode(const string& s){
	string str;
	int count;
	int white_spaces;

	str = "";
	count = 0;
	white_spaces = 0;
	while(s[count] != '\0'){
		if(s[count]!=' '){
			white_spaces++;
		}
		count++;
	}

	if(white_spaces > 1){
		str = removeSpaces(s);
		str = toUpperCase(str);
		str = scramble(str);
	}
	else{
		Exception str("The provided text is too short to be safely encrypted");
		throw (str);
	}

	return (str);
}

string TranspositionCipher::decode(const string& s){
	return (unscramble(s));
}

string	TranspositionCipher :: removeSpaces(const string& s){
	string str;
	int count;

	count = 0;
	str = "";
	while (count < s.length()){
		if(s[count]!=' '){
			str = str + s[count];
		}
		count++;
	}
	return (str);
}

string	TranspositionCipher :: toUpperCase(const string& s){
	string str;
	int count;
	int asscii_diff;

	count = 0;
	str = "";
	while(s[count] != '\0'){
		asscii_diff = int(s[count]) - 32;
		if(int(s[count]) > 96 && int(s[count]) < 123){
			str += char(asscii_diff);
		}
		else{
			str = str + s[count];
		}
		count++;
	}
	return (str);
}