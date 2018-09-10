#ifndef ARENA_H
#define ARENA_H

#include "team.h"

class arena{ 
	private:
		int		redRenown;
		int		blueRenown;
		int		turnLimit;
		int		teamSize;
		int		randomSeed;
		team*	redTeam;
		team*	blueTeam;
	public:
		arena(int seed, int tSize, int numTurns);
		~arena();
		void	createRedTeam(int*);
		void	createBlueTeam(int*);
		void	purgeBlueTeam(int*);
		void	purgeRedTeam(int*);
		void	clearBlueTeam();
		void	clearRedTeam();
		void	runSimulation();
		void	displayResults();
		double	rollDice();
};

#endif

