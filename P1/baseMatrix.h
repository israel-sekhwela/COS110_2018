#ifndef	baseMatrix_h
#define	baseMatrix_h

class baseMatrix{
	int numRows;
	int numCols;
	int ** matrix;

	public:
		void	setRows(int a);
		void	setCols(int a);
		int		getRows();
		int		getCols();
		void	createMatrix();
		void	randomiseMatrix(int seed, int min, int max);
		int		getElement(int r, int c);
		int		sumMatrix();
		void	displayMatrix();
};

#endif