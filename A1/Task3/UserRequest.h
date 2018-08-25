#ifndef userrequest_h
#define userrequest_h

#include "Location.h"
#include "MovieFile.h"

class UserRequest{
        Location*   location;
        MovieFile*  movie;
        int         movieIndex;
        int         requestId;
        static int  id;
        bool        status;
    public:
        ~UserRequest();
        UserRequest(Location* loc, int fileIndex);
        Location*   getLocation();
        int         getMovieIndex();
        int         getRequestId();
        bool        isComplete();
        void        setComplete(bool);
        void        download(MovieFile* video, int bytes);
        void        download(int data);
        int         getAmountDownloaded();
        MovieFile*  getDownloadedFile();
};
#endif