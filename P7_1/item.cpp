#include "item.h"

template<class T>
item<T> :: item(T t){
	data = t;
}

template<class T>
item<T> :: ~item(){
	cout << "Item Deleted\n";
}

template<class T>
T	item<T> :: getData(){
	return (data);
}