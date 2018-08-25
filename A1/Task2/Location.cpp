#include "Location.h"

Location :: Location(int a, int b){
    x = a;
    y = b;
}

int     Location :: getX(){
    return (x);
}

int     Location :: getY(){
    return (y);
}

float   Location :: computeDistance(const Location& loc){
    return (sqrt(pow(x - loc.x, 2) + pow(x - loc.y, 2)));
}

string  Location :: toString(){
    string myString;

    myString = "(" + to_string(x) + "," + to_string(y) + ")";
    return (myString);
}
