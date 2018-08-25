#include "MovieFile.h"

MovieFile :: MovieFile(string n, int dur, int fs){
    name = n;
    duration = dur;
    fileSize = fs;
}

MovieFile :: MovieFile(const MovieFile& other){
    name = other.name;
    duration = other.duration;
    fileSize = other.fileSize;
}

string MovieFile :: getName(){
    return (name);
}

int     MovieFile :: getDuration(){
    return (duration);
}

int     MovieFile :: getFileSize(){
    return (fileSize);
}

void    MovieFile :: setFileSize(int sizeFile){
    fileSize = sizeFile;
}

void    MovieFile :: appendFileSize(int sizeFile){
    fileSize += sizeFile;
}