#include "team.h"

team :: team(){
	teamSize = 0;
	fightingTeam = 0;
	
	/*teamSize = 0;
	fightingTeam = new gladiator*[getSize()];
	for (int i = 0; i < getSize(); ++i){
		fightingTeam[i] = 0;
	}
	*/
}

team :: ~team(){
	if (fightingTeam != 0){
		for (int i = 0; i < teamSize; i++){
			delete fightingTeam[i];
		}
		delete [] fightingTeam;
		fightingTeam = 0;
	}
}

int		team :: getSize(){
	return (teamSize);
}

void	team :: setSize(int s){
	teamSize = s;
}

gladiator& team :: operator[](int i){
	return *(fightingTeam[i]);
}

team&	team :: operator+(int *add){
	fightingTeam = new gladiator*[teamSize];
    
	for (int i = 0; i < teamSize; i++){
		if (add[i] == 1){
			fightingTeam[i] = new trax();
		}
		else
		if (add[i] == 2){
			fightingTeam[i] = new murmillo();
		}
		else
		if (add[i] == 3){
			fightingTeam[i] = new retiarius();
		}
		else
		if (add[i] == 4){
			fightingTeam[i] = new dimachaerus();
		}
		else{
			fightingTeam[i] = 0;
		}
	}
	return (*this);
}

team&	team :: operator-(int *sub){
	int position = 0;
	for (int i = 0; i < teamSize; i++){
		if (fightingTeam[i]->taunt() == "THRACE REMEMBERS!"){
			position = 1;
		}
		else
		if (fightingTeam[i]->taunt() == "I AM INVINCIBLE!"){
			position = 2;
		}
		else
		if(fightingTeam[i]->taunt() == "NEPTUNE TAKE YOU!"){
			position = 3;
		}
		else
		if(fightingTeam[i]->taunt() == "MARS WILL HAVE YOUR HEAD!"){
			position = 4;
		}
		//If that gladiator type is found at the index in the passed in array, that gladiator pointer must be deallocated.
		if (position == sub[i]){
			delete fightingTeam[i];
			fightingTeam[i] = 0;
		}
	}

	return (*this);
}

team	team :: operator--(){
	for (int i = 0; i < teamSize; i++){
		if (fightingTeam[i] != 0){
			delete fightingTeam[i];
		}
	}
	delete [] fightingTeam;
	fightingTeam = 0;
	
	return (*this);
}

std::ostream& operator<<(ostream &output, const team& t){
	if (t.fightingTeam != 0){
		for (int i = 0; i < t.teamSize; i++) {
			if (t.fightingTeam[i] != 0){
				output << "Gladiator " << (i + 1) << ": ";
				if (t.fightingTeam[i]->taunt() == "THRACE REMEMBERS!"){
					output << "Trax" << endl;
				}
				else
				if (t.fightingTeam[i]->taunt() == "I AM INVINCIBLE!"){
					output << "Murmillo" << endl;
				}
				else
				if (t.fightingTeam[i]->taunt() == "NEPTUNE TAKE YOU!"){
					output << "Retiarius" << endl;
				} 
				else
				if (t.fightingTeam[i]->taunt() == "MARS WILL HAVE YOUR HEAD!"){
					output << "Dimachaerus" << endl;
				}
			}
		}
	}
    return (output);
}
