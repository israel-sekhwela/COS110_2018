#ifndef OneTimePad_h
#define OneTimePad_h

#include "SubstitutionCipher.h"

class OneTimePad : public SubstitutionCipher {
    private:
        long int seed;
        string   ascii;
    
    protected:
       virtual char encodeChar(char);
       virtual char decodeChar(char);
    
    public:
        OneTimePad(long int);
        void setSeed(long int);
        std::string encode(const std::string &);
        std::string decode(const std::string &);
};

#endif