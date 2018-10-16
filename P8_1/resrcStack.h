#ifndef resrcStack_h
#define resrcStack_h

template <class T>
class stackNode;

#include <iostream>

using namespace std;

template <class Type>
class resrcStack{
	private:
		stackNode<Type>* top;
	public:
		resrcStack();
		~resrcStack();
		void push(stackNode<Type>* t);
		void pop();
		stackNode<Type>* peek();
		void print();
		string determineTransportRequirement();
};

#include "stackNode.h"

#endif