#include "dimachaerus.h"

dimachaerus :: dimachaerus(){
	setHP(16);
	setAS(0.75);
	setDS(0.15);
	setAppeal(10);
	setDamage(4);
	setSeedR(100);
}

dimachaerus :: ~dimachaerus(){
	cout << "Dimachaerus removed\n";
}

string	dimachaerus :: taunt(){
	return ("MARS WILL HAVE YOUR HEAD!");
}

void	dimachaerus :: defenceBolster(){
	setAS(getAS() + 0.01);
	setDS(getDS() + 0.01);
	setAppeal(getAppeal() - 1);
}

void	dimachaerus :: specialAction(){
	setAppeal(getAppeal() - 1);
	setHP(getHP() + 2);
}

void	dimachaerus :: print(){
	cout << "HP: " << getHP() <<endl;
	cout << "AS: " << getAS() <<endl;;
	cout << "DS: " << getDS() <<endl;;
	cout << "Appeal: " << getAppeal() <<endl;;
	cout << "Damage: " << getDamage() <<endl;;
	cout << "SeedR: " << getSeedR() <<endl;;
}
