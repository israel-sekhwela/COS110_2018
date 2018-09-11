#ifndef swapScramble_H
#define swapScramble_H

#include "TranspositionCipher.h"

class swapScramble : public TranspositionCipher {
    public:
        std::string scramble(const std::string &s);
        std::string unscramble(const std::string &s);
};

#endif
