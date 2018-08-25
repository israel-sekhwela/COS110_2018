#include <iostream>
#include "Location.h"
#include "MovieFile.h"
#include "UserRequest.h"

using namespace std;

int main()
{
    //--------------------------------------------
	//      Example code: UserRequest class
    //--------------------------------------------
    int fileIndex = 0;
    MovieFile* movie = new MovieFile("Black Panther", 120, 350);
    UserRequest* req = new UserRequest(new Location(30,10),   fileIndex);
    
     cout << req->getLocation()->toString() << endl;    //output: (30,10)
    cout << req->getMovieIndex() << endl;                   //output: 0
    req->download(movie, 20);
    cout << req->getAmountDownloaded()  << endl;    //output: 20
       
    delete req;
    req = nullptr;
    
    delete movie;
    movie = nullptr;
    
	return 0;
}
