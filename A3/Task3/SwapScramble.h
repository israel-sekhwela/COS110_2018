#ifndef SwapScramble_H
#define SwapScramble_H

#include "TranspositionCipher.h"

class SwapScramble : public TranspositionCipher {
    public:
        std::string scramble(const std::string &s);
        std::string unscramble(const std::string &s);
};

#endif
