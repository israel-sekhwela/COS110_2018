#include <iostream>
#include "combiner.h"

using namespace std;

int main(){
	
	combiner c;
	
	//set Rows and Columns
	c.setRows(3);
	c.setCols(3);
	
	//initialise the map
	c.initialiseMap();

	//combine fragments
	c.combineFragments("frag1.txt","frag2.txt","frag3.txt");
	
	//display map
	c.displayMap();
	cout<<endl;
	
	//Determine Average
	c.smoothColours();

	//display map
	c.displayMap();
	cout<<endl;

	return (0);
}