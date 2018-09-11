#ifndef Cipher_h
#define Cipher_H

#include <string>
#include <vector>

class Cipher {
    public:
        virtual std::string encode(const std::string &) = 0;
        virtual std::string decode(const std::string &) = 0;
};

#endif
