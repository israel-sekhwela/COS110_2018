#include "laserCannon.h"

laserCannon :: laserCannon(char f){
	firingMode = f;
}

laserCannon :: ~laserCannon(){
	cout << "Laser Cannon Uninstalled!" << endl;
}

char	laserCannon :: getMode(){
	return (firingMode);
}

void	laserCannon :: setMode(char s){
	firingMode = s;
}

string	laserCannon :: fire(){
	if(getAmmo() != 0){
		if(getAmmo() >= 1 && firingMode == 'S'){
			setAmmo(getAmmo() -1);
			return ("Laser Cannon fired!");
		}
		else 
		if(getAmmo() >= 4 && firingMode == 'Q'){
			setAmmo(getAmmo()-4);
			return ("Laser Cannon Quad Burst fired!");
		}
		else{
			throw ammoOut();			
		}
	}	
	else{
		throw ammoOut();
	}
}


