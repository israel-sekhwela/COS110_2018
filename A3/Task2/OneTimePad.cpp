#include <cstdlib>
#include "OneTimePad.h"

OneTimePad :: OneTimePad(long int l){
  this->setSeed(l);
}

void OneTimePad :: setSeed(long int l){
  int count;

  ascii = "";
  count = 0;
  while(count < 95){
    ascii = ascii + char(count + 32);
    count++;
  }

  if(l >= 0){
    seed = l;
  }
  else{
    Exception str("Negative number provided");
    throw (str);
  }
  srand(this->seed);
}


string OneTimePad :: encode(const string& s){
  srand(this->seed);
  return SubstitutionCipher::encode(s);
}

string OneTimePad :: decode(const string& s){
  srand(this->seed);
  return (SubstitutionCipher::decode(s));
}

char OneTimePad :: encodeChar(char c){
  int random; 
  int ascii_diff;
  int count;

  ascii_diff = int(c) - 32;
  random = rand() % 94 + 1;
  
  count = 0;
  while(count < random){
    if((ascii_diff + 1) > 94){
      ascii_diff = 0;
    }
    else{
      ascii_diff = ascii_diff + 1;
    }
    count++;
  }
  
  return (ascii[ascii_diff]);
}

char OneTimePad :: decodeChar(char c){
  int random; 
  int ascii_diff;
  int count;

  ascii_diff = int(c) - 32;
  random = rand() % 94 + 1;
  
  count = 0;
  while (count < random){
    if((ascii_diff - 1)<0){
      ascii_diff = 94;
    }
    else{
      ascii_diff = ascii_diff - 1;
    }
    count++;
  }

  return (ascii[ascii_diff]);
}