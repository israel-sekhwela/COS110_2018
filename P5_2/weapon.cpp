#include "weapon.h"

weapon :: weapon(){}

weapon :: ~weapon(){}

weapon :: ammoOut :: ammoOut(){}

weapon :: ammoOut :: ~ammoOut() throw(){}

weapon :: weapon(int a, string t) :ammo(a), type(t){}

int	weapon :: getAmmo(){
	return (ammo);
}

string	weapon :: getType(){
	return (type);
}

void	weapon :: setAmmo(int s){
	ammo = s;
}

void	weapon :: setType(string s){
	type = s;
}

const char* weapon :: ammoOut :: what() const throw(){	
	return ("Ammo Depleted!");
}
