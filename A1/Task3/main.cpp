#include <iostream>
#include "Location.h"
#include "MovieFile.h"
#include "UserRequest.h"
#include "Server.h"

using namespace std;

int main()
{
    //--------------------------------------------
	//      Example code: UserRequest class
    //--------------------------------------------
    int fileIndex = 0;
    MovieFile* movie = new MovieFile("Black Panther", 120, 350);
    MovieFile* movie2 = new MovieFile("Batman", 110, 280);
    MovieFile** movielist = new MovieFile*[2];
    movielist[0] = movie;
    movielist[1] = movie2;

    UserRequest* req = new UserRequest(new Location(30,10),fileIndex);
    UserRequest* req2 = new UserRequest(new Location(20,25),1);
    UserRequest* req3 = new UserRequest(new Location(15,28),2);
    
    cout << req->getLocation()->toString() << endl;    //output: (30,10)
    cout << req->getMovieIndex() << endl;                   //output: 0
    cout << req->getRequestId() << endl; // output : 1
    req->download(movie, 80);
    req2->download(movie2,50);
    req3->download(movie,80);
    cout << req->getAmountDownloaded()  << endl;    //output: 20

    //Server(string name, int x, int y, double speed, int maxUsers, int movieCount, MovieFile** files)
    Server* s1 = new Server("Server_JHB",12,20,30,12,4,movielist);
  
    if(s1->canAcceptRequests())
    	    s1->assignRequest(req);
    else
    	cout << "No Can Do! " << endl;

    s1->assignRequest(req2);
    s1->assignRequest(req3);

    cout << s1->getConnectedUsersCount() << endl;

    s1->runDownloads();
    s1->printInfo();
    s1->dropCompletedRequests();
    s1->printDetailedInfo();


    delete req;
    req = nullptr;
    delete req2;
    req2 = nullptr;
    delete req3;
    req3 = nullptr;

    delete movie;
    movie = nullptr;

    delete movie2;
    movie2 = nullptr;

    delete [] movielist;

    movielist = nullptr;
    
	return 0;
}
