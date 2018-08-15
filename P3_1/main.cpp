#include "tome.h"
#include <iostream>

using namespace std;

int main()
{
	string references1[] ={"Volkano lost vol1","Star Wars vol3","Haters and Maggots skies vol3","Black and White vol 3","Youtube"};
	tome* Tome1 = new tome("Snickers and Shoulders",5,"George Lucas",references1);

	string references2[] ={"Soduko","Swati's and Zulu","Bread and Butter","Dogs and Cats"};
	tome* Tome2 = new tome("Snickers and Shoulders2.0",4,"J.K Rowling",references2);

	tome* Tome3 = new tome("Stuff Kinds",10,"JJ Abrahams"); 
	cout<<"Something works\n";
	*Tome3 = *Tome1 + *Tome2;
	cout<<"Occurs after this!!!\n";


	cout<<"Tome 1 stuff: "<<*Tome1<<endl;
	cout<<"Tome 2 stuff: "<<*Tome2<<endl;
	cout<<"Tome 3 stuff: "<<*Tome3<<endl;

	//cout <<"Another Test!" <<endl;
	return 0;
}
