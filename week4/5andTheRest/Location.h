#ifndef INC_5ANDTHEREST_LOCATION_H
#define INC_5ANDTHEREST_LOCATION_H

class Location {
public:
    int x, y, z;

    Location();
    ~Location();
    Location(int x, int y, int z);

    void Display();
    void Set(int x, int y, int z);

};

#endif //INC_5ANDTHEREST_LOCATION_H
