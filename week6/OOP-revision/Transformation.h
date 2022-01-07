#ifndef OOP_REVISION_TRANSFORMATION_H
#define OOP_REVISION_TRANSFORMATION_H

#include "Magic.h"

class Transformation: public Magic{
private:
	string creature;

public:
	~Transformation();

	Transformation(string creature);
	void Display();
};


#endif //OOP_REVISION_TRANSFORMATION_H
