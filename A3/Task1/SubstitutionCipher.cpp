#include "SubstitutionCipher.h"

string SubstitutionCipher :: encode(const string &s){
  for(size_t i = 0;i < s.length();i++){
    s[i] = this->encodeChar(s[i]);
  }
  return (s);
}

string SubstitutionCipher :: decode(const string &s){
  for(size_t i = 0;i < s.length();i++){
    s[i] = this->decodeChar(s[i]);
  }
  return (s);
}
