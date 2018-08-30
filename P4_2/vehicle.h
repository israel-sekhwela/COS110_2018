#ifndef vehicle_h
#define vehicle_h

#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>

#include <iostream>
using namespace std;

class vehicle{
	private:
		char**	map;
		string	name;
		int	size;
	public:
		vehicle();
		void	setName(string s);
		string	getName();
		char**	getMap();
		int	getSize();
		void	setMap(string s);
		char	getMapAt(int x, int y);

		virtual ~vehicle();
		virtual void operator--();
		virtual	void determineRouteStatistics() = 0;
};

#endif
