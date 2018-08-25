#include "UserRequest.h"

int         UserRequest :: id = 0;

UserRequest :: UserRequest(Location* loc, int fileIndex){
    location = new Location(loc->getX(), loc->getY());
    movieIndex = fileIndex;
    requestId = ++id;
}

Location*   UserRequest :: getLocation(){
    return (location);
}
int         UserRequest :: getMovieIndex(){
    return (movieIndex);
}

int         UserRequest :: getRequestId(){
    return (requestId);
}

bool        UserRequest :: isComplete(){
   return (status);
}

void        UserRequest :: setComplete(bool stat){
    status = stat;
}

void        UserRequest :: download(MovieFile* video, int bytes){
    movie = new MovieFile(*video);
    movie->setFileSize(bytes);
}

void        UserRequest :: download(int data){
    movie->appendFileSize(data);
}

int         UserRequest :: getAmountDownloaded(){
    return (movie->getFileSize());
}

MovieFile*  UserRequest :: getDownloadedFile(){
    if (movie != 0){
        return (movie);
    }
    else{
        return (0);
    }
}

UserRequest             :: ~UserRequest(){
    delete location;
    location = 0;

    if (movie != 0){
        delete movie;
    }
    movie = 0;
}