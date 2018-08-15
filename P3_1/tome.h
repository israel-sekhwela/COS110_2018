#ifndef	tome_h
#define	tome_h

#include <string>
#include <iostream>
#include <cstring>

using namespace std;

class tome{
		string 	references[10];
		string	tomeName;
		string	author;
		int		spellsStored;
	
	public:
		tome(string name, int tomSize, string authour);
		tome(string name, int tomSize, string authour, string * initialList);
		~tome();
		
		int		getTomeSize();
		string	getSpell(int i) const;
		string	*getReferences();
		string	getName();
		string	getAuthor();
		tome		operator+(tome & add);
		friend	ostream & operator<<(ostream & output, const tome & t);
		void		operator=(const tome & oldTome);
};

#endif