#include "dLL.h"
#include "dLL.cpp"

int main(){
	cout <<"DLL Simulation"<<endl;
	
	dLL <int> node;
	item <int>* n1;
	item <int>* n2;
	item <int>* n3;

	
	n1 = new item<int>(5);
	n3 = new item<int>(0);
	n2 = new item<int>(1);

	//add2 = new item<int>(2);
	//add3 = new item<int>(3);
	
	
	
	node.push(n1);
	node.push(n2);
	node.push(n3);


	for(int i = 0; i < 3; i++){
		cout << "node @ " << i << ": "<< node.getItem(i)->getData() <<endl;
	}

	cout << "Lowest: " << node.minNode() <<endl;

//	node.push(add2);
//	node.push(add3);
	cout<<endl;
	node.printList();

	cout<<"Poping Bowls!"<<endl;
	node.pop();
	node.printList();
	
	/*for(int i = 0; i < 1; i++){
		cout << "node @ " << i << ": "<< node.getItem(i)->getData() <<endl;
	}*/
	return (0);
}
	
