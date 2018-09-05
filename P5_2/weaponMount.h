#ifndef weaponMount_h
#define weaponMount_h

#include "ionCannon.h"
#include "laserCannon.h"

class weaponMount{
	private:
		weapon**	weapons;
		int		numWeapons;
	public:
		weaponMount(int numWeapons, string* weaponList);
		~weaponMount();
		weapon* accessWeapon(int i);
		struct weaponFailure : public exception{
			weaponFailure();
			virtual ~weaponFailure() throw();
			virtual const char* what() const throw();
		};
};

#endif
