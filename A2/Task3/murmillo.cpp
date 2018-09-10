#include "murmillo.h"

murmillo :: murmillo(){
	setHP(30);
	setAS(0.45);
	setDS(0.75);
	setAppeal(1);
	setDamage(1);
	setSeedR(100);
}

murmillo :: ~murmillo(){
	cout << "Murmillo removed\n";
}

void	murmillo :: print(){
	cout << "HP: " << getHP() <<endl;;
	cout << "AS: " << getAS() <<endl;;
	cout << "DS: " << getDS() <<endl;;
	cout << "Appeal: " << getAppeal() <<endl;;
	cout << "Damage: " << getDamage() <<endl;;
	cout << "SeedR: " << getSeedR() <<endl;;
}

string	murmillo :: taunt(){
	return ("I AM INVINCIBLE!");
}

void	murmillo :: defenceBolster(){
	setDamage(getDamage() + 1);
	setDS(getDS() + 0.01);
}

void	murmillo :: specialAction(){
	if(getHP() <= 5){
		setAS(getAS() + 0.2);
		setDS(0.5);
		setDamage(3);
	}
	else
	if(getHP() > 5 && getHP() <= 10){
		setAS(0.35);
		setAppeal(getAppeal() + 2);
	}
	else
	if(getHP() > 10){
		setAppeal(getAppeal() + 3);
	}
}
