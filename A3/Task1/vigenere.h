#ifndef Vigenere_H
#define Vigenere_H

#include "substitutionCipher.h"

class Vigenere : public SubstitutionCipher {
    private:
        std::string codeword;
    
    protected:
        char encodeChar(const std::string &);
        char decodeChar(const std::string &);
    
    public:
        Vigenere(const std::string &);
        void        setCodeWord(const std::string &);
        std::string encode(const std::string &);
        std::string decode(const std::string &);
};

#endif
