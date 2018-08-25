#include "Server.h"

Server :: Server(string name, int x, int y, double speed, int maxUsers, int movieCount, MovieFile** files){
    this->name = name;
    downloadSpeed = speed;
    capacity = maxUsers;
    numMovies = movieCount;
    numConnectedUsers = 0;

    location = new Location(x,y);
    movies = files;

    requests = new UserRequest*[maxUsers];
    int i = 0;
    while(i < maxUsers){
        requests[i++] = 0;
    }
}
//Should deallocate any dynamic memory
Server :: ~Server(){
    //Deallcate Request
    for(int i = 0; i < capacity; i++){
        if (requests[i] != 0){
            delete requests[i];
        }
    }
    delete [] requests;
    requests = 0;

    //Deallocate Location
    delete location;
    location = 0;

    //Deallocate Movies
    for(int i = 0; i < numMovies; i++){
        delete [] movies[i];
    }
    delete movies;
    movies = 0;
}

//-- accessor functions - self-explanatory
int         Server ::  getConnectedUsersCount(){
    return (numConnectedUsers);
}

string      Server :: getName(){
    return (name);
}

int         Server :: getCapacity(){
    return (capacity);
}

int         Server :: getDownloadSpeed(){
    return (downloadSpeed);
}

Location*   Server :: getLocation(){
    return (location);
}

//Returns TRUE if the server can accept any further requests, and FALSE otherwise
bool        Server :: canAcceptRequests(){
    if (numConnectedUsers == capacity){
        return (0);
    }
    return (1);
}

//Makes a shallow copy of the UserRequest object and adds it to the server's list of requests
void        Server :: assignRequest(UserRequest* request){
    int i;

    i = 0;
    while (i < capacity && requests[i]){
        if (requests[i] == 0){
            requests[i] = request;
            numConnectedUsers++;
        }
        i++;
    }
}

//Runs the dowload process for all requests where a chunk of data is sent to the respective requests 
//(see spec for more details)
void        Server :: runDownloads(){
    int i;
    int j;
    int pos;

    i = 0;
    j = 0;
    while (i < capacity){
        if (requests[i] != 0){
            while(j < numMovies){
                if (requests[i]->getDownloadedFile()->getName() == movies[j]->getName()){
                    pos = j;
                }
                j++;
            }
            if (requests[i]->getDownloadedFile()->getFileSize() < movies[pos]->getFileSize()){
                    requests[j]->setComplete(0);
            }
            else{
                requests[i]->getDownloadedFile()->setFileSize(movies[pos]->getFileSize());
                requests[i]->setComplete(1);
            }
        }
        i++;
    }
}

//Drops all user requests that have been fulfilled, and removes them from the  request list. 
//The resulting elements in the request list should be stored in contiguous locations 
// (i.e. in sequential order with no empty elements between them).
void        Server :: dropCompletedRequests(){
    int i;
    int j;


    i = 0;
    j = 0;
    while(i < numConnectedUsers){
        if (requests[i]->isComplete()){
            requests[i] = 0;
            while(j < numConnectedUsers){
                if (j == numConnectedUsers - 1){
                    requests[j] = 0;
                }
                else{
                    requests[j] = requests[j + 1];
                }
                j++;
            }
            numConnectedUsers--;
            i--;
        }
        i++;
    }
}

//Prints out an abridged version of the server's details (see spec for more details)
void        Server :: printInfo(){
    cout << name <<", Location: " << location->toString()<< ", #Connections " << numConnectedUsers << endl;
}
//Prints out the server's details and info about the current user requests (see spec for more details)
void        Server :: printDetailedInfo(){
    int i;

    i = 0;
    while (i < numConnectedUsers){
        cout << "      Request "<< requests[i]->getRequestId() << ", Downloaded data: " << requests[i]->getAmountDownloaded() << "MB" << endl;
        i++;
    }
}