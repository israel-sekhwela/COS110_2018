#ifndef TranspositionCipher_H
#define TranspositionCipher_H

#include "Cipher.h"

class TranspositionCipher : public Cipher {
    protected:
        virtual std::string scramble(const std::string &);
        virtual std::string unscramble(const std::string &);
        std::string  removeSpaces(const std::string &);
        std::string  toUpperCase(const std::string &);
    
    public:
        std::string encode(std::const string &);
        std::string decode(std::const string &);
};

#endif
