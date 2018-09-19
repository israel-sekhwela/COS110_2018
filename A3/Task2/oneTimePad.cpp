#include "oneTimePad.h"
#include <stdlib.h> /* srand, rand */

OneTimePad :: OneTimePad(long int l){
  this->seed = l;
}

void OneTimePad :: setSeed(long int l){
  this->seed = l;
}

char OneTimePad :: encodeChar(char c){
  srand(this->seed);

  int asc = int(c);
  asc += (rand() % 100 + 1);
  
  if (asc > 126){
    asc = 31 + (asc - 126);
  }
  c = asc;
  return (c);
}

char OneTimePad::decodeChar(char c){
  srand(this->seed);

  int asc = int(c);
  asc -= (rand() % 100 + 1);

  if (asc < 32){
    asc = 127 - (32 - asc);
  }
  c = asc;
  return (c);
}