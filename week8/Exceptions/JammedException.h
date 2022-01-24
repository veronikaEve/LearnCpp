#ifndef EXCEPTIONS_JAMMEDEXCEPTION_H
#define EXCEPTIONS_JAMMEDEXCEPTION_H
#include <exception>
using namespace std;

class JammedException : public exception{
public:
	virtual const char* what() const throw() {
		return "Jammed";
	}
};


#endif //EXCEPTIONS_JAMMEDEXCEPTION_H
