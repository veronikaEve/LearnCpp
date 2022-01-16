#ifndef EXCEPTIONS_NOAMMOEXCEPTION_H
#define EXCEPTIONS_NOAMMOEXCEPTION_H
#include <exception>
using namespace std;

class NoAmmoException : public exception {
public:
	virtual const char* what() const throw() {
		return "Insufficient ammunition";
	}
};

#endif //EXCEPTIONS_NOAMMOEXCEPTION_H
