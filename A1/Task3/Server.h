#ifndef SERVER_H_
#define SERVER_H_

#include "UserRequest.h"

class Server {
private:
    string name;                           //name of server
	double downloadSpeed;       //consistent speed at which server transfers data
	int capacity;                           //maximum number of requests that the server can handle
	int numConnectedUsers;       //tracks number of requests that the server handling
	int numMovies;                      //number of movies loaded on this server

	UserRequest** requests;         //array of requests that has been assigned to this server
	Location* location;                 //location of server
	MovieFile** movies;                //array of movies that can be downloaded from this server

public:
    //Creates a shallow copy of the movie files, and assigns all other relevant variables
	Server(string name, int x, int y, double speed, int maxUsers, int movieCount, MovieFile** files);
    //Should deallocate any dynamic memory
	~Server();

    //-- accessor functions - self-explanatory
	int getConnectedUsersCount();
    string getName();
	int getCapacity();
    int getDownloadSpeed();
	Location* getLocation();

    //Returns TRUE if the server can accept any further requests, and FALSE otherwise
    bool canAcceptRequests();

    //Makes a shallow copy of the UserRequest object and adds it to the server's list of requests
	void assignRequest(UserRequest* request);

    //Runs the dowload process for all requests where a chunk of data is sent to the respective requests 
    //(see spec for more details)
	void runDownloads();

    //Drops all user requests that have been fulfilled, and removes them from the  request list. 
    //The resulting elements in the request list should be stored in contiguous locations 
    // (i.e. in sequential order with no empty elements between them).
	void dropCompletedRequests();

    //Prints out an abridged version of the server's details (see spec for more details)
    void printInfo();
    //Prints out the server's details and info about the current user requests (see spec for more details)
	void printDetailedInfo();

};

#endif /* SERVER_H_ */
