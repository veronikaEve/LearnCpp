#ifndef INC_5ANDTHEREST_HEALTHKIT_H
#define INC_5ANDTHEREST_HEALTHKIT_H

#include "GameObject.h"

class HealthKit: public GameObject  {
public:
    HealthKit();
    ~HealthKit();

    HealthKit(int newId, Location *location);
};


#endif //INC_5ANDTHEREST_HEALTHKIT_H
