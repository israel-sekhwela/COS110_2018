#include <iostream>
#include "Simulator.h"

using namespace std;

int main()
{
    //--------------------------------------------
	//      Example code: Simulator class
    //--------------------------------------------
	string movieFile = "MovieList.txt";
	string serverFile = "ServerInfo.txt";

    int seed = 789;
    int maxIter = 4;
    float prob = 0.90;
	Simulator sim(serverFile, movieFile, seed);
	cout << sim.generateRandomLocation()->toString() << endl;   //output: (15,0)
    cout << sim.generateRandomMovieIndex() << endl;                 //output: 2
	sim.run(maxIter, prob); 
    /*output:
        [1] Generate new user (rand = 0.4797) with movie index 0
                UserRequest location: (90,95) => assigned to Server_PTA
        [2] Generate new user (rand = 0.5013) with movie index 1
                UserRequest location: (99,51) => assigned to Server_DBN
        [3]
        [4] Generate new user (rand = 0.1029) with movie index 2
                UserRequest location: (68,41) => assigned to Server_DBN
    */
    sim.printServerInfo();      
    /*output:
        -----------------------------------------------------
                Server Report
        -----------------------------------------------------
        Server_CPT, Location: (10,20), #Connections: 0
        Server_PTA, Location: (60,80), #Connections: 1
        Server_DBN, Location: (90,50), #Connections: 2
        -----------------------------------------------------
    */
    
}







