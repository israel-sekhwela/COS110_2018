#ifndef laserCannon_h
#define laserCannon_h

#include "weapon.h"

using namespace std;

class laserCannon : public weapon{
	private:
		char firingMode;
	public:
		laserCannon(char f);
		~laserCannon();
		char	getMode();
		void	setMode(char s);
		string	fire();
};

#endif
