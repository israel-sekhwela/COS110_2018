#include "Exception.h"

Exception :: Exception(const std::string &s){
    error = s;
};

std::string Exception :: getError(){
    return (error);
}