#ifndef TranspositionCipher_H
#define TranspositionCipher_H

#include "Cipher.h"

class TranspositionCipher : public Cipher {
    protected:
        virtual string scramble(const string &) = 0;
        virtual string unscramble(const string &) = 0;
        string  removeSpaces(const string &);
        string  toUpperCase(const string &);
    
    public:
        string encode(const string &);
        string decode(const string &);
};

#endif
