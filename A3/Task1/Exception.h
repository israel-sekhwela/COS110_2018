#include "Cipher.h"

class Exception{
    protected:
        std::string error;
    public:
        Exception(const std::string &);
        std::string getError();
};