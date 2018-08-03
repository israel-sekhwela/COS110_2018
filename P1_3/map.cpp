#include "map.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void	map :: setRows(int a){
	if(a > 0)
		rows = a;
}

void	map :: setCols(int a){
	if(a > 0)
		cols = a;
}

int	map :: getRows(){
	return (rows);
}

int	map :: getCols(){
	return (cols);
}

int	map :: getHeight(char a){
	if (a == '*')
		return (1);
	else
	if (a == '0')
		return (0);
	else
	if (a == '^')
		return (2);
	else
	if (a == '#')
		return (-1);
}

void	map :: initialiseMap(string s){
	int	i;
	int	j;
	
	i = 0;
	map = new char*[rows];
	while (i < rows){
		map[i] = new char[cols];
		i++;
	}
	
	i = 0;
	j = 0;
	ifstream file(s.c_str());
	if(file){
		
	/*	while (i < rows){
			while (j < cols){ 
				file >> map[i][j];
				j++;
			}
			++i;
		}
	*/
		for(int x=0;x<rows;x++)
			for(int y =0;y<cols;y++)
				file>>map[x][y];
	}
}

void	map :: displayMap(){
	int i;
	int j;
	
	i = 0;
	j = 0;
	/*
	while (i < rows){
		while(j < cols){
			cout << map[i][j] ;
			j++;
		}
		i++;
	}
	*/
	for(int x=0;x<rows;x++){
		for(int y =0;y<cols;y++){
			cout<<map[x][y];
		}
		cout<<endl;
	}
}

string	map :: determinePeaks(){
	string peak;
	ostringstream row;
	ostringstream col;

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			int currentH = getHeight(map[i][j]);
			int testH;
			
			if (i -1 && j-1 >=0){
				testH = getHeight(map[i][j+1]);
				if(currentH > testH){
					row << i;
					cols << j;
				}				
			}
		}
		
				peak +="(" + row.str() + "," + col.str() +")";
	}
	return peak;
}
	