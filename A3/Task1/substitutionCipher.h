#ifndef SubstitutionCipher_H
#define SubstitutionCipher_H

#include "Cipher.h"

class SubstitutionCipher : public Cipher {
    protected:
        virtual char encodeChar(char) = 0;
        virtual char decodeChar(char) = 0;
    public:
        std::string encode(const std::string &);
        std::string decode(const std::string &);
};

#endif
