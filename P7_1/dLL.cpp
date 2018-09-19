#include "dLL.h"
#include "item.cpp"

template<class T>
dLL<T> :: dLL(){
	this->head = NULL;
	this->tail = NULL;
	size = 0;
}

template<class T>
dLL<T> :: ~dLL(){
	while (head) {
		item<T>* next = head->next;
		delete head;
		size = size - 1;
		head = next;
	}
}

template<class T>
item<T>*	dLL<T> :: getHead(){
	return (head);
}

template<class T>
item<T>*	dLL<T> :: getTail(){
	return (tail);
}

template<class T>
void		dLL<T> :: push(item<T>* newItem){
	newItem->next = NULL;
	newItem->prev = NULL;
	
	if (head == NULL){
		head = newItem;
		tail = head;
		size = size + 1;
	}
	else{
		head->prev = newItem;
		newItem->next = head;
		head = newItem;
		size = size + 1;
	}
}

template<class T>
item<T>*	dLL<T> :: pop(){
	item<T>* temp = head;
	
	head = head->next;
	head->prev = NULL;
	size = size - 1;
	
	return (temp);
}

template<class T>
item<T>*	dLL<T> :: getItem(int i){
	if (i == 0) {
		return (head);
	}
	else 
	if (i == size - 1) {
		return (tail);
	}
	else
	if (i < 0 || i >= size) {
		return (NULL);
	}
	if (i < size / 2) {
		item<T>* temp = this->head;
		int index = 0;
		while (temp) {
			if (index == i) {
				return temp;
			}
			index++;
			temp = temp->next;
		}
	}
	else {
		item<T>* temp = tail;
		int index = size - 1;
		while (temp) {
			if (index == i){
				return temp;
			}
			index--;
			temp = temp->prev;
		}
	}
	return (NULL);
}

template<class T>
T		dLL<T> :: minNode(){
	item<T>* current;
	current = head;

    T lowest;
   lowest = head->getData();
   while(current != NULL){
        if(lowest > current->getData()){
            lowest = current->getData();;
        }
        current = current->next;
    }

    return (lowest);
}

template<class T>
int		dLL<T> :: getSize(){
	return (size);
}

template<class T>
void		dLL<T> :: printList(){
	item<T>*node = this->head;
	
	while(node) {
			if(node == tail){
				cout << node->getData();
			}
			else{
				cout << node->getData() << ",";
			}
			node = node->next;
	}
	cout << endl;
}
