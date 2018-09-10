#include "arena.h"

arena :: arena(int seed, int tSize, int numTurns){
    redRenown = 0;
    blueRenown = 0;

    turnLimit = numTurns;
    randomSeed = seed;
    teamSize = tSize;

    srand(randomSeed);
    redTeam = new team();
    blueTeam = new team();
    
    redTeam->setSize(tSize);
    blueTeam->setSize(tSize);
}

arena :: ~arena(){
	if (redTeam != 0) {
        delete redTeam;
        redTeam = 0;
    }
    if (blueTeam != 0) {
        delete blueTeam;
        blueTeam = 0;
    }
}

void	arena :: createRedTeam(int* types){
    // for(int i = 0; i < redTeam->getSize(); i++){
    //     redTeam[i] + types;
    // }

    //*redTeam = *redTeam + types;
    *redTeam + types;
	cout << *redTeam;
}

void	arena :: createBlueTeam(int* types){
    // for(int i = 0; i < blueTeam->getSize(); i++){
    //     blueTeam[i] + types;
    // }

    //*blueTeam = *blueTeam + types;
    *blueTeam + types;
	cout << *blueTeam;
}

void	arena::purgeRedTeam(int* types){
    // for(int i = 0; i < redTeam->getSize(); i++){
    //     blueTeam[i] - types;
    // }

    //*redTeam = *redTeam - types;
    *redTeam - types;
}

void	arena::purgeBlueTeam(int* types){
    // for(int i = 0; i < blueTeam->getSize(); i++){
    //     blueTeam[i] - types;
    // }

    //*blueTeam = *blueTeam - types;
    *blueTeam - types;
}

void	arena :: clearBlueTeam(){
   // blueTeam = blueTeam--;
    //for some reason you have to delete ????
    //delete blueTeam;
    --(*blueTeam);
}

void	arena::clearRedTeam(){
    //redTeam = redTeam--;
    //for some reason you have to delete ????
    //delete redTeam;
    --(*redTeam);
}

void	arena :: runSimulation(){
    //must be within the turning limit
    for(int i = 0; i < turnLimit; i++){
        //Simulation For blue Team
        for (int i = 0; i < blueTeam->getSize(); i++) {
            if ((*blueTeam)[i].getHP() < 0) {
                (*blueTeam)[i].setAS((*blueTeam)[i].getAS() - 0.05);
                (*blueTeam)[i].setDS((*blueTeam)[i].getDS() - 0.05);
                (*blueTeam)[i].setAppeal((*blueTeam)[i].getAppeal() + 1);
            }
            if (rollDice() > 0.5) {
                blueRenown += (*blueTeam)[i].attack((*redTeam)[i]);
            }
            else {
                (*blueTeam)[i].defenceBolster();
            }
            
            if (rollDice() > 0.85) {
                (*blueTeam)[i].specialAction();
                blueRenown += 5;
            }
        }

        //Simulation For Red Team
        for (int i = 0; i < redTeam->getSize(); i++) {
            if ((*redTeam)[i].getHP() < 0) {
                (*redTeam)[i].setAS((*redTeam)[i].getAS() - 0.05);
                (*redTeam)[i].setDS((*redTeam)[i].getDS() - 0.05);
                (*redTeam)[i].setAppeal((*redTeam)[i].getAppeal() + 1);
            }
            if (rollDice() > 0.5) {
                redRenown += (*redTeam)[i].attack((*blueTeam)[i]);
            }
            else {
                (*redTeam)[i].defenceBolster();
            }
            
            if (rollDice() > 0.85) {
                (*redTeam)[i].specialAction();
                redRenown += 5;
            }
        }
    }    
}

void	arena :: displayResults(){
    cout << "Fight Finished\n";
    cout << "Winner: ";
    
    if (redRenown == blueRenown){
        cout << "Tied\n";
    }
    else
    if (redRenown > blueRenown){
        cout << "Red Team\n";
    }
    else{
        cout << "Blue Team\n";
    }
    cout << "Red Renown: " << redRenown << endl;
 	cout << "Blue Renown: " << blueRenown << endl;
    cout << "Turns: " << turnLimit << endl;
}

double	arena :: rollDice(){
    return ((double)rand() / RAND_MAX);
}