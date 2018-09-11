#include "cipher.h"

class Exception{
    protected:
        std::string;
    public:
        Exception(const std::string &);
        std::string getError();
};
