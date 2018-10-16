#include "stackNode.h"

template <class T>
stackNode<T> :: stackNode(T i, int q){
	this->resrc = i;
	this->quantity = q;
}

template <class T>
stackNode<T> :: ~stackNode(){
	cout<<"Resource Unit Destroyed\n";
}

template <class T>
T   stackNode<T> :: getResrc(){
	return (resrc);
}

template <class T>
int stackNode<T> :: getQuantity(){
	return (quantity);
}