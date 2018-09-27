#ifndef exception_h
#define exception_h

#include <string>
using namespace std;

class Exception{
    protected:
        string error;
    public:
	Exception(const string &s){
		error = s;
	}
	
	string getError(){
		return (error);
	}

	void	throwException(Exception e){
		throw e;
	}
};

#endif