#include "vehicle.h"

vehicle :: vehicle(){

}

vehicle :: ~vehicle(){

}

void	vehicle :: setName(string s){
	name = s;
}

string	vehicle :: getName(){
	return (name);
}

char**	vehicle	:: getMap(){
	return (map);
}

int	vehicle :: getSize(){
	return (size);
}

void	vehicle :: setMap(string s){
	ifstream f;
	f.open(s.c_str());
	char swap = ' ';
	int count = 0;

	f >> size;
	string map_2[size];
	map = new char*[size];
	for (int i = 0; i < size; i++){
		map[i] = new char[size];
		for (int j = 0; j < size; j++){
			map[i][j] = swap;
		}
	}
	if(f){
		while(!f.eof()){
			f >> map_2[count];
			count++; 
		}
		f.close();
	}
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			map[i][j] = map_2[i][j];
		}
	}
}

char	vehicle :: getMapAt(int x, int y){
	if(x >= getSize() || y >= getSize()){
		return (':');
	}
	else{
		return (map[x][y]);
	}
}

void	vehicle :: operator--(){
	//Acts as a destructor
	for (int i = 0; i < getSize(); i++){
		delete [] map[i];
	}
	delete [] map;
	map = 0;
}
