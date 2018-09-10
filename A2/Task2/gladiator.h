#ifndef gladiator_h
#define gladiator_h

#include <iostream>
#include <cstdlib>

using namespace std;

class gladiator{
	private:
		int	HP;
		double	AS;
		double	DS;
		int	appeal;
		int	damage;
		int	seedR;

	public:
		gladiator();
		void	setRandomSeed();
		int	getSeedR()const;
		void	setSeedR(int);
		int	getHP()const;
		void	setHP(int);
		double	getAS()const;
		double	getDS()const;
		void	setAS(double);
		void	setDS(double);
		void	setAppeal(int);
		void	setDamage(int);
		int	getAppeal()const;
		int	getDamage()const;
		int	attack(gladiator& glad);
		virtual ~gladiator();
		virtual string taunt()=0;
		virtual void print()=0;
		virtual void defenceBolster();
		virtual void specialAction();
};

#endif
