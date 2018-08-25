#ifndef moviefile_h
#define moviefile_h

#include <iostream>
#include <string>
using namespace std;

class MovieFile{
        string  name;
        int     duration;
        int     fileSize;
    public:
        MovieFile(string, int, int = 0);
        MovieFile(const MovieFile& other);
        string  getName();
        int     getDuration();
        int     getFileSize();
        void    setFileSize(int);
        void    appendFileSize(int);
};

#endif