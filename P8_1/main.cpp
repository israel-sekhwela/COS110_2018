#include "stackNode.h"
#include "resrcStack.h"
#include "resrcStack.cpp"

int main(){
	stackNode<string> *node1 = new stackNode<string>("first", 1);
	stackNode<string> *node2 = new stackNode<string>("Second", 2);
	
	resrcStack<string> *stack = new resrcStack<string>;

	cout<<"Pushing\n";
	stack->push(node1);
	stack->push(node2);

	stack->print();
	cout<<endl;

	cout<<"Popping\n";
	stack->pop();
	stack->print();

	cout<<endl;
	cout<<stack->determineTransportRequirement()<<endl;
	
	delete stack;
	
	return (0);
}