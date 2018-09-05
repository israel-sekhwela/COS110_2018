#ifndef ionCannon_h
#define ionCannon_h

#include "weapon.h"

class ionCannon : public weapon{
	private:
		int strength;
	public:
		ionCannon(int s);
		~ionCannon();
		void	setStrength(int s);
		int	getStrength() const;
		string	fire();
};

#endif
