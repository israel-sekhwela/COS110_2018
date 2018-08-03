#include "combiner.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

void	combiner :: setRows(int a){
	if(a > 0)
		rows = a;
}

void	combiner :: setCols(int a){
	if(a > 0)
		cols = a;
}

int	combiner :: getRows(){
	return (rows);
}

int	combiner :: getCols(){
	return (cols);
}

void	combiner :: initialiseMap(){
	colourMap = new int*[rows];
	for(int i=0;i<rows;i++){
		colourMap[i] = new int[cols];
		for(int j =0;j<cols;j++)
			colourMap[i][j] = -1;
	}
}

void	combiner :: displayMap(){
	for(int i=0;i<rows;i++){
		for(int j =0;j<cols;j++){
			cout<<colourMap[i][j] <<",";
			if (j != (cols - 1)){
				cout<<endl;
			}
		}
		cout<<endl;
	}
}

void	combiner :: combineFragments(string f1,string f2, string f3){
	ifstream	file1(f1.c_str());
	ifstream	file2(f2.c_str());
	ifstream	file3(f3.c_str());

	string		capture_str1;
	string		capture_str2;
	int			testLine;

	//this is just for testing
	string		**temp;

	temp = new string*[rows];
	for(int i = 0; i < rows; i++){
		temp[i] = new string[cols];
	}

	testLine = 1;
	capture_str1 = "";

	//File_1
	while(!file1.eof()){
		file1 >> capture_str1;
		for(int i = 0; i < rows; i++){
			if(capture_str1[0] == ','){
				capture_str2 += capture_str1[i];
			}
		}
		for(int i = 0; i < rows; i++){
			temp[testLine-1][i] = capture_str2[i];
		}
		capture_str1 = "";
		capture_str2 = "";
		testLine++;
	}
	//File_2
	while(!file2.eof()){
		file2 >> capture_str1;
		for(int i = 0; i < rows; i++){
			if(capture_str1[0] == ','){
				capture_str2 += capture_str1[i];
			}
		}
		for(int i = 0; i < rows; i++){
			temp[testLine-1][i] = capture_str2[i];
		}
		capture_str1 = "";
		capture_str2 = "";
		testLine++;
	}
	//File_3
	while(!file3.eof()){
		file3 >> capture_str1;
		for(int i = 0; i < rows; i++){
			if(capture_str1[0] == ','){
				capture_str2 += capture_str1[i];
			}
		}
		for(int i = 0; i < rows; i++){
			temp[testLine-1][i] = capture_str2[i];
		}
		capture_str1 = "";
		capture_str2 = "";
		testLine++;
	}
	
	//Convert int to string using atoi function
	for(int i = 0; i < rows; i++){
		for(int j = 0; i < cols;j++){
			colourMap[i][j] = atoi(temp[i][j].c_str());
		}
	}
}

void	combiner :: smoothColours(){
	int av;
	int	numElements;

	av = 0;
	numElements = 0;
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			av += colourMap[i][j];
			numElements++;
		}
	}
	av /= numElements;

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; i++){
			colourMap[i][j] = av;
		}
	}	
}
