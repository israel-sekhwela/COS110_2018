#include "baseMatrix.h"
#include <cstdlib> //for srand and rand
#include <iostream>

using namespace std;

void	baseMatrix :: setRows(int a){
	if (a >= 0)
		numRows = a;
	else
		cout << "Impossible to set negative size!";
}

void	baseMatrix :: setCols(int a){
	if (a >= 0)
		numCols = a;
	else
		cout << "Impossible to set negative size!";
}

int		baseMatrix :: getRows(){
	return (numRows);
}

int		baseMatrix :: getCols(){
	return (numCols);
}

void	baseMatrix :: createMatrix(){
	int	i;
	int	j;

	i = 0;
	j = 0;
	matrix = new int*[numRows];
	while (i < numRows){
		matrix[i] = new int[numCols];
		while(j < numCols){
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	baseMatrix :: randomiseMatrix(int seed, int min, int max){
	int i;
	int j;

	i = 0;
	j = 0;
	srand (seed);
	while (i < numRows){
		while (j < numCols){
			matrix[i][j] = rand() % (max - min + 1) + min;
			j++;
		}
		i++;
	}
}

int		baseMatrix :: getElement(int r, int c){
	/*int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < numRows){
		while (j < numCols){
			if (matrix[i][j] == 0 || i > 3 || j > 3 || i < 0 || j < 0){
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (matrix[r][c]);
	*/
	if(r < 0 || r>=numRows || c < 0 || c>numCols){
		return (-1);
	}
	else{
		return (matrix[r][c]);
	}
}

int		baseMatrix :: sumMatrix(){
	int	i;
	int	j;
	int	sum;

	i = 0;
	j = 0;
	sum = 0;
	while (i < numRows){
		while(j < numCols){
			sum += matrix[i][j];
			j++;
		}
		i++;
	}
	return (sum);
}

void	baseMatrix :: displayMatrix(){
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < numRows){
		while(j < numCols){
			cout << matrix[i][j] ;
			if(j == 2 || j == 5){
				cout <<"\n";
			}
			else{
				if (j != numCols - 1){
					cout << ",";
				}
			}
			j++;
		}
		i++;
	}
}