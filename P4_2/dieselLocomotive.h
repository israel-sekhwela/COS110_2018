#ifndef dieselLocomotive_h
#define dieselLocomotive_h


#include "vehicle.h"

class dieselLocomotive : public vehicle{
	private:
		int	passengerLimit;
	public:
		dieselLocomotive();
		~dieselLocomotive();
		int	getPassengerLimit();
		void	setPassengerLimit(int s);
		void	determineRouteStatistics();
};

#endif
