#ifndef dLL_h
#define dLL_h

#include "item.h"

template<class T>
class dLL{
	item<T>* head;
	item<T>* tail;
	int size;
	
	public:
		dLL();
		~dLL();
		item<T>	*getHead();
		item<T>	*getTail();
		void	push(item<T>* newItem);
		item<T>	*pop();
		item<T>	*getItem(int i);
		T		minNode();
		int		getSize();
		void	printList();
};

#endif