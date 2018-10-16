#include "resrcStack.h"
#include "stackNode.cpp"

template <class Type>
resrcStack<Type> :: resrcStack(){
	this->top = 0;
}

template <class Type>
resrcStack<Type> :: ~resrcStack(){
	stackNode<Type>* nodePtr;
	
	if(this->top!=0){
		while(this->top != 0){
			nodePtr = top;
			this->top = top->next;
			delete nodePtr;
		}
	}
}

template <class Type>
void    resrcStack<Type> :: push(stackNode<Type>* t){
	if(!top){
		this->top = t;
	}
	else
	{
		stackNode<Type>* newNode = new stackNode<Type>(t->getResrc(), t->getQuantity());
		newNode->next = top;
		this->top = newNode;
	}
}

template <class Type>
void    resrcStack<Type> :: pop(){
	stackNode<Type>* temp;

	if(top){
		temp = top;
		if(top->next){
			this->top = top->next;
			temp->next = 0;
			delete temp;
		}
		else{
			delete temp;
			this->top = 0;
		}
	}
	else{
		cout << "EMPTY" << endl;;
	}
}

template <class Type>
stackNode<Type>* resrcStack<Type> :: peek(){
	return (top);
}

template <class Type>
void resrcStack<Type> :: print(){
	stackNode<Type>* nodePtr;

	nodePtr = top;
	if(nodePtr){
		while(nodePtr->next){
			cout << "Resource: " << nodePtr->getResrc() << endl;
			cout << "Quantity: " << nodePtr->getQuantity() << endl;
			nodePtr = nodePtr->next;
		}
		cout << "Resource: " << nodePtr->getResrc() << endl;
		cout << "Quantity: " << nodePtr->getQuantity() << endl;
	}
}

template <class Type>
string      resrcStack<Type> :: determineTransportRequirement(){
	int count;
	int totalQuantity;

	stackNode<Type>* nodePtr;
	nodePtr = top;

    count = 0;
    totalQuantity = 0;
	if(nodePtr){
		while(nodePtr->next){
			totalQuantity += nodePtr->getQuantity();
			nodePtr=nodePtr->next;
            count++;
		}
		totalQuantity += nodePtr->getQuantity();
		count++;
	}
	
	if(totalQuantity > 100){
		return( "train");
	}
	else
    if((totalQuantity > 50) && (count <= 10)){
		return ("car");
	}
	else
    if(count <= 5){
		return ("drone");
	}
	else{
		return ("LOGISTICS ERROR");
	}
}