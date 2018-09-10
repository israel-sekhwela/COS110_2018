#include "retiarius.h"

void		retiarius :: setControl(int c){
	control = c;
}

int		retiarius :: getControl(){
	return (control);
}

retiarius :: retiarius(){
	setHP(17);
	setAS(0.70);
	setDS(0.25);
	setAppeal(6);
	setDamage(3);
	setControl(0);
	setSeedR(100);
}
retiarius :: ~retiarius(){
	cout << "Retiarius removed\n";
}

void	retiarius :: print(){
	cout << "HP: " << getHP() <<endl;;
	cout << "AS: " << getAS() <<endl;;
	cout << "DS: " << getDS() <<endl;;
	cout << "Appeal: " << getAppeal() <<endl;;
	cout << "Damage: " << getDamage() <<endl;;
	cout << "Control: " << getControl() <<endl;;
	cout << "SeedR: " << getSeedR() <<endl;;
}

string	retiarius :: taunt(){
	return ("NEPTUNE TAKE YOU!");
}

void	retiarius :: defenceBolster(){
	setAS(getAS() + 0.01);
	setDS(getDS() + 0.1);
	setAppeal(getAppeal() - 1);
}

void	retiarius :: specialAction(){
	control++;
	if((control % 2) == 0){
		setDS(getAS() + 0.05);
	}
	if((control %  5) == 0){
		setAppeal(getAppeal() + 2);
	}
}
