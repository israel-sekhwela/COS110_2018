#ifndef	combiner_h
#define	combiner_h

#include <string>

using namespace std;

class combiner{
	int rows;
	int cols;
	int	**colourMap;
	
	public:
		void	setRows(int a);
		void	setCols(int a);
		int		getRows();
		int		getCols();
		void	initialiseMap();
		void	displayMap();
		void	combineFragments(string f1, string f2, string f3);
		void	smoothColours();
};

#endif
