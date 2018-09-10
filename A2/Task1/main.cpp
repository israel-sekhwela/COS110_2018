#include "trax.h"
#include "murmillo.h"
#include "retiarius.h"
#include "dimachaerus.h"

int main(){
	gladiator *Izzy, *SQlr;

	Izzy = new trax();
	SQlr = new murmillo();

	cout<<Izzy->taunt()<<endl;
	cout<<SQlr->taunt()<<endl;

	//Izzy->specialAction();
	//SQlr->defenceBolster();

	cout << Izzy->attack(*SQlr)<< endl;
	
	cout << "Before Attack!\n-------------"<<endl;
	Izzy->print();
	
	cout << "\nAfter Attack!\n-------------"<<endl;
	SQlr->print();

	delete Izzy;
	delete SQlr;
	SQlr = 0;
	Izzy = 0;
	
	return 0;
}
