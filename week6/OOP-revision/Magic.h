#ifndef OOP_REVISION_MAGIC_H
#define OOP_REVISION_MAGIC_H
#pragma once

#include <iostream>

using namespace std;

class Magic {
public:
	~Magic();

	Magic();
	virtual void Display() = 0;
	// The = 0 indicates that there is no definition and as a consequence of this objects can’t be instantiated from this class.
};


#endif //OOP_REVISION_MAGIC_H
