#ifndef location_h
#define location_h

#include <cmath>
#include <string>
using namespace std;

class Location{
        int x;
        int y;
    public:
        Location(int, int);
        int     getX();
        int     getY();
        float   computeDistance(const Location& loc);
        string  toString();
};

#endif