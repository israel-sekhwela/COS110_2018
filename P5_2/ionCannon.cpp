#include "ionCannon.h"

ionCannon :: ionCannon(int s){
	strength = s;
}

ionCannon :: ~ionCannon(){
	cout << "Ion Cannon Uninstalled!" << endl;
}
void	ionCannon :: setStrength(int s){
	strength = s;
}
int	ionCannon :: getStrength() const{
	return (strength);
}
string	ionCannon :: fire(){
	int		strength_ = strength;
	string		myString;
	stringstream	s_s;

	if(getAmmo() != 0){
		setAmmo(getAmmo()-1);
		strength++;

		s_s << strength_;
		myString = s_s.str();

		return ("Ion Cannon fired at strength: " + myString);
	}
	else{
		throw ammoOut();
	}	
}
