#ifndef SIMULATOR_H_
#define SIMULATOR_H_

#include "Server.h"

class Simulator {
private:
    //declare all necessary private members
    
    const int MIN_LOCATION_VALUE = 0;
	const int MAX_LOCATION_VALUE = 100;
	
public:
    //Loads server and movie information from given file and seeds the 
    //random number generator with given seed parameter
	Simulator(string serversFile, string moviesFile, int seed = 123);
    //Appropriately deallocates memory
	~Simulator();
	
    //--- accessor functions
    int getNumServers();
    int getNumMovies();
     Server* getServer(int index);          //returns Server object at given index
     
     //Returns a random index between 0 and the number of movie files
     //loaded in the constructor
	int generateRandomMovieIndex();
    
    //Returns a Location object that is randomly generated within the bounds 
    //[MIN_LOCATION_VALUE, MAX_LOCATION_VALUE]
    Location* generateRandomLocation();
    
    //Generates a random user request based on the following probability rule:
    //      if rand() < demandProb ? generate new request : do not generate request
    //If a new request was generated, it should be assigned to the closest server based on the 
    //Euclidean distance computation based on its capacity.
    //Function runs all server downloads for the current iteration, and then drops all fulfilled requests.
    //(see spec for more details and console outputs expected from this function)
    void run(int maxDuration, float demandProb = 0.5, bool verbose=true);
   
    //Prints out an abridged version of all server information (see spec for more information)
    void printServerInfo();

};

#endif /* SIMULATOR_H_ */
