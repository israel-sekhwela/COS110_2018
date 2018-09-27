#ifndef Columnar_H
#define Columnar_H

#include "TranspositionCipher.h"

class Columnar : public TranspositionCipher {
    private:
        string codeword;
        int*   permutation;
        
        char** characters;
        int    size;
        int    length;

    protected:
        string scramble(const string &);
        string unscramble(const string &);

    public:
        Columnar(const string &);
        ~Columnar();
        void    setCodeword(const string &);
        void    deallocate();
        int     getSize();
        char**  getCharArray();
};

#endif
