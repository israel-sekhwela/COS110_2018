#include "weaponMount.h"

weaponMount :: weaponFailure :: weaponFailure(){}

weaponMount :: weaponFailure :: ~weaponFailure() throw(){}

weaponMount :: ~weaponMount(){
	for (int i = 0; i < numWeapons; i++){
		delete weapons[i];
	}
	delete [] weapons;
	weapons = 0;
}

weaponMount :: weaponMount(int numWeapons, string* weaponList){
	this->numWeapons = numWeapons;
	weapons = new weapon*[this->numWeapons];

	for (int i = 0; i < (this->numWeapons); i++){
		if(weaponList[i] == "Laser Cannon Q"){
			weapons[i] = new laserCannon('Q');
		}
		else 
		if(weaponList[i] == "Laser Cannon S"){	
			weapons[i] = new laserCannon('S');
		}
		else
		if(weaponList[i] == "Ion Cannon"){
			weapons[i] = new ionCannon(5);	
		}
		else{
			weapons[i] = 0;
		}
	}
}

weapon* weaponMount :: accessWeapon(int i){
	for (int i_ = 0; i_ < (this->numWeapons); i_++){
		if(i_ == i){return (weapons[i_]);}
	}
	throw weaponFailure();
}

const char * weaponMount :: weaponFailure :: what() const throw(){
	return ("Weapon System Failure!");
}

