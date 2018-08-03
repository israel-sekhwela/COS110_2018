#include <iostream>
#include "map.h"

using namespace std;

int main(){
	
	map m;
	
	//set Rows and Columns
	m.setRows(3);
	m.setCols(3);
	
	//initialise the map
	m.initialiseMap("map1.txt");
	
	//display map
	m.displayMap();
	cout<<endl;
	
	//Determine Peaks
	cout << m.determinePeaks() <<endl;
	return (0);
}