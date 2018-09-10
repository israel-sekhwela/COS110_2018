#include "arena.h"
#include "team.h"

int main(){
	// int*	add = new int[10];
    // int*	sub = new int[10];
    // team*	KizerChiefs = new team();
    
    // add[0] = 1;
    // add[1] = 3;
    // add[2] = 1;
    // add[3] = 4;
    
    // sub[0] = 2;
    // sub[1] = 2;
    // sub[2] = 1;
    // sub[3] = 4;
    
    // cout << "\nSize of Kizer Chiefs is: " << KizerChiefs->getSize() << endl;
    // team t;
    
    // t = *KizerChiefs;
    // t.setSize(4);
    
    // cout << "add list: " << *add << endl;
    // cout << "sub list: " << *sub << endl;
    
    // t = t + add;
    // cout << "\nAddition\n-----------------------" << endl;
    // cout << t;
    
    
    // t = t - sub;
    // cout << "\nSubtraction\n-----------------------" << endl;
    // cout << t;

	// t = --t;
    // cout << "\nOperator--()\n-----------------------" << endl;
	
    int* redteam = new int[10];
    int* blueteam = new int[10];
    
    redteam[0] = 1;
    redteam[1] = 2;
    // redteam[2] = 3;
    // redteam[3] = 4;
    // redteam[4] = 5;
    // redteam[5] = 6;
    // redteam[6] = 7;
    // redteam[7] = 8;
    // redteam[8] = 9;
    // redteam[9] = 10;

    blueteam[0] = 1;
    blueteam[1] = 2;
    // blueteam[2] = 3;
    // blueteam[3] = 4;
    // blueteam[4] = 5;
    // blueteam[5] = 6;
    // blueteam[6] = 7;
    // blueteam[7] = 8;
    // blueteam[8] = 9;
    // blueteam[9] = 10;


    arena battleGround(100, 2, 20);

    battleGround.createBlueTeam(blueteam);    
    battleGround.createRedTeam(redteam);
    
    battleGround.runSimulation();
    battleGround.displayResults();
    
    cout << endl ;
    
    battleGround.purgeBlueTeam(blueteam);
    battleGround.purgeRedTeam(redteam);

    battleGround.displayResults();
    return 0;
}
