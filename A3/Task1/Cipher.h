#ifndef Cipher_h
#define Cipher_h

#include <sstream>
#include <string>

using namespace std;

#include "Exception.h"

class Cipher{
    public:
        virtual string encode(const string &) = 0;
        virtual string decode(const string &) = 0;
};

#endif