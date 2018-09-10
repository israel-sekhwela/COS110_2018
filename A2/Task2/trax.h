#ifndef trax_h
#define trax_h

#include "gladiator.h"

class trax : public gladiator{
	private:
		int sprints;
	public:
		trax();
		~trax();
		int		getSprints();
		void		setSprints(int);
		string	taunt();
		void		print();
		void		defenceBolster();
		void		specialAction();
};

#endif
