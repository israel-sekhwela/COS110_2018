#include <iostream>
#include "Location.h"
#include "MovieFile.h"

using namespace std;

int main()
{
    //--------------------------------------------
	//      Example code: Location class
    //--------------------------------------------
    Location* loc1 = new Location(30,10);
    Location* loc2 = new Location(20,20);
    
    cout << loc1->computeDistance(*loc2) << endl;            //output: 14.1421
    cout << loc2->toString() << endl;                                    //output: (20,20)
    
    delete loc1;
    delete loc2;
    loc1 = nullptr;
    loc2 = nullptr;
    
    //--------------------------------------------
	//      Example code: MovieFile class
    //--------------------------------------------
    MovieFile* movie1 = new MovieFile("Black Panther", 120, 350);
    MovieFile* movie12 = new MovieFile("Black Panther", 120);
    cout << movie1->getFileSize() << endl;      //output: 350
    movie1->setFileSize(50) ;    
    cout << movie1->getFileSize() << endl;       //output: 50
   
    delete movie1;
    movie1 = nullptr;

    
	return 0;
}




