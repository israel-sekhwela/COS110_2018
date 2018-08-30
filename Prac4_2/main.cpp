#include "dieselLocomotive.h"

int main(){

	dieselLocomotive* dl = new dieselLocomotive();

	dl->setPassengerLimit(75);
	dl->setName("Israel SQlr");
	dl->setMap("map1.txt");
	dl->determineRouteStatistics();

	return (0);
}
