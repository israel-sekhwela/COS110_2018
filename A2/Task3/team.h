#ifndef team_h
#define team_h

#include "gladiator.h"
#include "retiarius.h"
#include "trax.h"
#include "murmillo.h"
#include "dimachaerus.h"

class team{
	private:
		gladiator	**fightingTeam;
		int			teamSize;
	public:
		team();
		~team();
		int			getSize();
		void		setSize(int s);
		gladiator&	operator[](int i);
		team&		operator+(int *add);
		team&		operator-(int *sub);
		team			operator--();
		friend ostream&	operator<<(ostream &output, const team& t);
};

#endif
