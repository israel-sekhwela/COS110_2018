#include "gladiator.h"

gladiator :: gladiator(){}

gladiator :: ~gladiator(){}

void gladiator :: defenceBolster(){}

void gladiator :: specialAction(){}

void	gladiator :: setRandomSeed(){
	srand(seedR);
}

void	gladiator :: setAppeal(int s){
	appeal = s;
}

void	gladiator :: setAS(double s){
	AS = s;
}

void	gladiator :: setDamage(int s){
	damage = s;
}

void	gladiator :: setDS(double s){
	DS = s;
}

void	gladiator :: setSeedR(int s){
	seedR = s;
}

void	gladiator :: setHP(int h){
	HP = h;
}

int		gladiator :: getAppeal()const{
	return (appeal);
}

double	gladiator :: getAS()const{
	return (AS);
}

double	gladiator :: getDS()const{
	return (DS);
}

int	gladiator :: getDamage()const{
	return (damage);
}

int	gladiator :: getHP()const{
	return (HP);
}

int	gladiator :: getSeedR()const{
	return (seedR);
}
int	gladiator :: attack(gladiator& glad){

	int		renownPoints = 0;
	double	rand1 = (double)rand() / (RAND_MAX);
	double	rand2 = (double)rand() / (RAND_MAX);
	
	if (rand1 < glad.getAS()){
		renownPoints += 10;
	}
	else{
		renownPoints -= 10;
	}
	
	if (rand2 <= getDS()){}
	else{
		setHP(glad.getHP() - glad.getDamage());
		if (getHP() <= 0){
			renownPoints += 30;
		}
	}
	renownPoints += getAppeal();
	return (renownPoints);
}