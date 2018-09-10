#ifndef retiarius_h
#define retiarius_h

#include "gladiator.h"

class retiarius : public gladiator{
	private:
		int control;
	public:
		retiarius();
		~retiarius();
		int		getControl();
		void	setControl(int);
		string	taunt();
		void	print();
		void	defenceBolster();
		void	specialAction();
};

#endif
