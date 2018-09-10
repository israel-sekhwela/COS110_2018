#include "trax.h"

trax :: trax(){
	setHP(16);
	setAS(0.65);
	setDS(0.55);
	setAppeal(5);
	setDamage(1);
	setSprints(5);
	setSeedR(100);
}

trax :: ~trax(){
	cout << "Trax removed\n";
}

void	trax :: setSprints(int s){
	sprints = s;
}

int		trax :: getSprints(){
	return (sprints);
}

void	trax :: print(){
	cout << "HP: " << getHP() <<endl;;
	cout << "AS: " << getAS() <<endl;;
	cout << "DS: " << getDS() <<endl;;
	cout << "Appeal: " << getAppeal() <<endl;;
	cout << "Damage: " << getDamage() <<endl;;
	cout << "Sprints: "<< getSprints() <<endl;;
	cout << "SeedR: " << getSeedR() <<endl;;
}

string	trax :: taunt(){
	return ("THRACE REMEMBERS!");
}

void	trax :: defenceBolster(){
	setAS(getAS() - 0.05);
	setDS(getDS() + 0.15);
}

void	trax :: specialAction(){
	if(sprints > 0){
		sprints--;
		setAppeal(getAppeal() + 2);
		setAS(getAS() + 0.1);
	}
}
