#include "richMatrix.h"

template<class T>
T** richMatrix<T>:: createNewMatrix(int size){
    T **matrix = new T*[size];
    for(int i = 0; i < size; i++){
		matrix[i] = new T[size];
	}
    
    return (matrix);
}

template<class T>
T** richMatrix<T> :: addMatrix(T** mat1, T** mat2, int size){
    T** sumMatrix = createNewMatrix(size);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            sumMatrix[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
    
    return (sumMatrix);
}

template<class T>
T** richMatrix<T> :: subtractMatrix(T** mat1, T** mat2, int size){
    T** subMatrix = createNewMatrix(size);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            subMatrix[i][j] = mat1[i][j] - mat2[i][j];
		}
	}
    
    return (subMatrix);
}

template<class T>
T** richMatrix<T> :: transposeMatrix(T** mat1, int size){
    T** trans = createNewMatrix(size);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            trans[i][j] = mat1[j][i];
		}
	}
    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            mat1[i][j] = trans[i][j];
		}
	}
    
    return (mat1);
}

template<class T>
void richMatrix<T> :: print(T** mat, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << mat[i][j];
            if(j == (size - 1)){
                cout << endl;
			}
        }
	}
}
