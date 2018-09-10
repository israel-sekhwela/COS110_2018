#include "team.h"

int main(){
	int*	add = new int[10];
    int*	sub = new int[10];
    team*	KizerChiefs = new team();
    
    add[0] = 1;
    add[1] = 3;
    add[2] = 1;
    add[3] = 4;
    
    sub[0] = 2;
    sub[1] = 2;
    sub[2] = 1;
    sub[3] = 4;
    
    cout << "\nSize of Kizer Chiefs is: " << KizerChiefs->getSize() << endl;
    team t;
    
    t = *KizerChiefs;
    t.setSize(4);
    
    cout << "add list: " << *add << endl;
    cout << "sub list: " << *sub << endl;
    
    t = t + add;
    cout << "\nAddition\n-----------------------" << endl;
    cout << t;
    
    
    t = t - sub;
    cout << "\nSubtraction\n-----------------------" << endl;
    cout << t;

	t = --t;
    cout << "\nOperator--()\n-----------------------" << endl;
	return 0;
}
