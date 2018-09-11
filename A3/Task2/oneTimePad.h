#include "substitutionCipher.h"

class OneTimePad : public SubstitutionCipher {
    private:
        long int seed;
    
    protected:
        char encodeChar(char);
        char decodeChar(char);
    
    public:
        OneTimePad(long int);
        void setSeed(long int);
        std::string encode(const std::string);
        std::string decode(const std::string);
};
