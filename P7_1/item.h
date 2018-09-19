#ifndef item_h
#define item_h

#include <iostream>

using namespace std;

template<class T>
class item{
	T data;
	public:
		item(T t);
		~item();
		item*	next; 
		item*	prev; 
		T		getData();
	
};

#endif