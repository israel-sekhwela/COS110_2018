#ifndef	map_h
#define	map_h

#include <string>

using namespace std;

class map{
	int rows;
	int cols;
	char ** map;
	
	public:
		void		setRows(int a);
		void		setCols(int a);
		int		getRows();
		int		getCols();
		int		getHeight(char a);
		void		initialiseMap(string s);
		void		displayMap();
		string	determinePeaks();
};

#endif