#include "tome.h"

tome 		:: tome(string name, int tomSize, string author){
	tomeName = name;
	spellsStored = tomSize;
	this->author = author;

	for (int i = 0; i < 10; i++)
		references[i] = "";
}

tome 		:: tome(string name, int tomSize, string author, string * initialList){
	tomeName = name;
	spellsStored = tomSize;
	this->author = author;

	for (int i = 0; i < 10; i++){
		if (i < tomSize){
			references[i] = initialList[i];
		}
		else{
			references[i] = "";
		}
	}
}

tome 		:: ~tome(){}

int 		tome :: getTomeSize(){
	return (spellsStored);
}

string	tome :: getSpell(int i) const{
	return (references[i]);
}

string*	tome :: getReferences(){
	return (references);
}

string	tome :: getName(){
	return (tomeName);
}

string	tome :: getAuthor(){
	return (author);
}

tome		tome :: operator+(tome & add){
	/*
	string au = authour + ", " + add.authour;
	string tn = (spellsStored >= add.spellsStored)?tomeName:add.tomeName;
	int ts = spellsStored + add.spellsStored;

	return new tome(tn,ts, au);
	*/

	int sumOfTomes;
	int count;

	sumOfTomes = spellsStored + add.spellsStored;

	//to store everything in C, eg C = A + B
	tome *C = new tome(tomeName, 10, author);
	if(sumOfTomes<=10){
		count = 0;
		for (int i = 0; i < 10; i++){
			if(i<sumOfTomes){
				if((references[i] != "") && (i< spellsStored)){
					C->references[i] = references[i];
				}
				else{
					C->references[i] = add.references[count];
					count++;
				}
			}
			else{
				references[i] = "";
			}
		}

		C->author = author + ", " + add.author;
		C->spellsStored = sumOfTomes;

		if(add.spellsStored > spellsStored){
			C->tomeName = add.tomeName;
		}
		else{
			C->tomeName = tomeName;
		}
	}
	return (*C);
}

ostream & operator<<(ostream & output, const tome & t){
	output << "Tome Name: " << t.tomeName << endl;
	output << "Author: " << t.author <<endl;
	output <<"References: ";

	for (int i= 0; i < t.spellsStored; i++){
		if (i != t.spellsStored - 1){
			output << t.references[i] <<", ";
		}
		else{
			output<< t.references[i] <<endl;
		}
	}
	return (output);
}

void		tome ::  operator=(const tome & oldTome){
	for (int i = 0; i < oldTome.spellsStored; i++)
		references[i] = oldTome.references[i];

	tomeName = oldTome.tomeName;
	author = oldTome.author;
	spellsStored = oldTome.spellsStored;
}