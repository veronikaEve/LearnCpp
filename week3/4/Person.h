#include <iostream>
#pragma once

using namespace std;

class Person
{
public:
    Person();
    ~Person();

    enum MovementStates { crawl, stand, walk, run };
    void Crawl();
    void Run();
    void Stand();
    void Walk();

protected:
    MovementStates movementState;
};
