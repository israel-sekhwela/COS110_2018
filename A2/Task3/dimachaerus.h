#ifndef dimachaerus_h
#define dimachaerus_h

#include "gladiator.h"

class dimachaerus : public gladiator{

	public:
		dimachaerus();
		~dimachaerus();
		string	taunt();
		void	defenceBolster();
		void	specialAction();
		void	print();
};

#endif
