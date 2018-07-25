#include <iostream>
#include "baseMatrix.h"

using namespace std;

int	main(){
	baseMatrix b;

	//set values
	b.setRows(3);
	b.setCols(9);

	//check num of rows and cols
	cout<<"Rows: " << b.getRows() <<" \nCols: " << b.getCols() <<endl;

	//create the Matrix
	b.createMatrix();
	cout<<endl;

	//print matrix
	cout<<"\t Matrix Before"<<endl;
	cout<<"------------------------------------\n";
	b.displayMatrix();
	cout<<endl;

	//randomise
	b.randomiseMatrix(2, 1, 9);

	//print matrix
	cout<<"\t Matrix After"<<endl;
	cout<<"------------------------------------\n";
	b.displayMatrix();
	cout<<endl;


	//The sum of Matrix
	cout << "\nThe sum is:" <<b.sumMatrix();
	cout << endl;

	//get Element in array
	cout<< "The element is: " << b.getElement(1,1);
	cout <<endl;
}