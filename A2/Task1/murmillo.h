#ifndef murmillo_h
#define murmillo_h

#include "gladiator.h"

class murmillo : public gladiator{
	public:
		murmillo();
		~murmillo();
		string	taunt();
		void	print();
		void	defenceBolster();
		void	specialAction();
};

#endif

