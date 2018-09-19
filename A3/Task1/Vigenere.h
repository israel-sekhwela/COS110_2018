#ifndef vigenere_H
#define vigenere_H

#include "SubstitutionCipher.h"

class Vigenere : public SubstitutionCipher {
    private:
        string codeword;
    
    protected:
        char encodeChar(const string &);
        char decodeChar(const string &);
    
    public:
        Vigenere(const string &);
        void        setCodeWord(const string &);
        string encode(const string &);
        string decode(const string &);
};

#endif
