#include "richMatrix.h"

int main(){
	
	int** m1, m2;
	
	richMatrix<int> matrix;
	
	//Create Matrix
	matrix.createNewMatrix(3);
	matrix.print(m1,3);
	
	//~ //Add Matrix
	//~ matrix.addMatrix(m1,m2,3);
	//~ matrix.print(m1,3);
	
	//~ //Subtract
	//~ matrix.subtractMatrix(m1,m2,3);
	//~ matrix.print(m1,int size);
	
	//~ //Transpose
	//~ matrix.transposeMatrix(m1, 3);
	//~ matrix.print(m1,3);
	return(0);
}