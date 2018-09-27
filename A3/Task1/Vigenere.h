#ifndef vigenere_H
#define vigenere_H

#include "SubstitutionCipher.h"

class Vigenere : public SubstitutionCipher{
    private:
        string  codeword;
        string  ascii;

    protected:
    	virtual char    encodeChar(char);
        virtual char    decodeChar(char);

    public:
        Vigenere(const string &);
        void	setCodeword(const string &);
        virtual string	encode(const string &);
        virtual string	decode(const string &);
};

#endif
