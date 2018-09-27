#include "SubstitutionCipher.h"

string SubstitutionCipher :: encode(const string &s){
  
  string str;

  str = "";
  for(int i = 0;i < s.length();i++){
    str =  str + encodeChar(s[i]);
  }
  return (str);
}

string SubstitutionCipher :: decode(const string &s){
  string str;

  str = "";
  for(int i = 0;i < s.length();i++){
    str = str + decodeChar(s[i]);
  }
  return (str);
}