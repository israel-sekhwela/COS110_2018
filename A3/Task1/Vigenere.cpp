#include "Vigenere.h"

//Global varable to access enocde amd decode index
int decode_index = 0;
int encode_index = 0;

Vigenere :: Vigenere(const string& s){
    //this->codeword = s;
    this->setCodeword(s);
}

void Vigenere :: setCodeword(const string& s){
    int count;
    int white_space;

    count = 0;
    while(count < 95){
        ascii = ascii + char(count + 32);
        count = count + 1; 
    }
        
    count = 0;
    white_space = 0;
    while(s[count] != '\0'){
        if(s[count]==' '){
            white_space++;
        }
        count = count + 1;
    }

    if(count > 1 && white_space != count){
            this->codeword = s;
    }
    else{
        Exception str("The codeword provided is not going to generate a safe encryption");
        throw (str);
    }
}

string Vigenere :: encode(const string& s){
    return (SubstitutionCipher::encode(s));
}

string Vigenere::decode(const string& s){
    return (SubstitutionCipher::decode(s));
}

char Vigenere::encodeChar(char c){
    int count;
    int ascii_diff;
    int size;

    count = 0;
    while(ascii[count] != codeword[encode_index]){
        count = count + 1;
    }

    ascii_diff = int(c) - 32;
    size = 0;
    while(size < count){
        if((ascii_diff + 1) > 94){
            ascii_diff = 0;
        }
        else{
            ascii_diff = ascii_diff + 1;
        }
        size = size + 1;
    }

    if(codeword[encode_index+1]){
        encode_index++;
    }
    else{
        encode_index = 0;
    }
    decode_index = 0;

    return (ascii[ascii_diff]);
}

char Vigenere :: decodeChar(char c){
    int count;
    int ascii_diff;
    int size;

    count = 0;
    while(ascii[count] != codeword[decode_index]){
        count++;
    }
    
    ascii_diff = int(c) - 32;
    size = 0;
    while(size < count){
        if((ascii_diff - 1) < 0){
            ascii_diff = 94;
        }
        else{
            ascii_diff = ascii_diff - 1;
        }
        size = size + 1;
    }
    
    if(codeword[decode_index + 1]){
        decode_index = decode_index + 1;
    }
    else{
        decode_index = 0;
    }
    encode_index = 0;

    return (ascii[ascii_diff]);
}
