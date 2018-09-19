#include "Vigenere.h"

 Vigenere(const string &s){
    this->codeword = s;

    for (int i = 0; i < codeword.size(); ++i){
        if (codeword[i] >= 'A' && codeword[i] <= 'Z'){
            this->codeword += codeword[i];
        }
        else 
        if (key[i] >= 'a' && codeword[i] <= 'z'){
            this->codeword += codeword[i] + 'A' - 'a';
        }
    }
 }
void    Vigenere :: setCodeWord(const string &s){
    try{
        if(s <= 0){
            throw("Please provide a positive shift value");
        }
        else
        if(s > 94){
            throw("Maximum shift is 94 for ASCII, please try again");
        }
        else{
            this->codeword = s;
        }
    }catch(string msg){
        cout << msg << endl;
        // int i;
        // cin >> i;
        // this->setShift(i);
    }
}

string Vigenere :: encode(string s){
    string out;

    for (int i = 0, j = 0; i < s.length(); ++i){
        char c = s[i];
        if (c >= 'a' && c <= 'z'){
            c += 'A' - 'a';
        }
        else
        if (c < 'A' || c > 'Z'){
            continue;
        }
        out += (c + codeword[j] - 2 * 'A') % 26 + 'A';
        j = (j + 1) % codeword.length();
    }
    return out;
}
string Vigenere :: decode(string s){
    string out;

    for (int i = 0, j = 0; i < s.length(); ++i){
        char c = s[i];
        if (c >= 'a' && c <= 'z'){
            c += 'A' - 'a';
        }
        else 
        if (c < 'A' || c > 'Z'){
            continue;
        }
        out += (c - codeword[j] + 26) % 26 + 'A';
        j = (j + 1) % codeword.length();
    }
    return (out);
}