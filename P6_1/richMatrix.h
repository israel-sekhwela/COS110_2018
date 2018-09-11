#ifndef richMatix_h
#define richMatrix_h

#include <iostream>

using namespace std;

template<class T>
class richMatrix{
	public:
		T**	createNewMatrix(int size);
		T**	addMatrix(T** mat1, T** mat2,int size);
		T**	subtractMatrix(T** mat1, T** mat2,int size);
		T**	transposeMatrix(T** mat1, int size);
		void	print(T** mat,int size);
	
};

#endif