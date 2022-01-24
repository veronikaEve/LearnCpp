#ifndef EXCEPTIONS_MAGAZINEFULLEXCEPTION_H
#define EXCEPTIONS_MAGAZINEFULLEXCEPTION_H
#include <exception>
using namespace std;

class MagazineFullException : public exception {
public:
	virtual const char* what() const throw() {
		return "magazine already contains 10 rounds";
	}
};


#endif //EXCEPTIONS_MAGAZINEFULLEXCEPTION_H
