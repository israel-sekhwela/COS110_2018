#ifndef Columnar_H
#define Columnar_H

#include "TranspositionCipher.h"

class Columnar : public TranspositionCipher {
    private:
        std::string codeword;
        int*        permutation;

    protected:
        std::string scramble(const std::string &);
        std::string unscramble(const std::string &);

    public:
        Columnar(const std::string &);
        ~Columnar();
        void    setCodeWord(const std::string &);
};

#endif
