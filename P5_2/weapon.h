#ifndef weapon_h
#define weapon_h

#include <sstream>
#include <exception>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

class weapon{
	private:
		int		ammo;
		string	type;
	public:
		weapon();
		weapon(int a, string t);
		int 	getAmmo();
		string	getType();
		void	setAmmo(int s);
		void	setType(string s);

		virtual ~weapon();
		virtual string fire()=0;
		struct ammoOut : public exception{
			ammoOut();
			virtual ~ammoOut() throw();
			virtual  const char* what() const throw();
		};
};

#endif
