#include <iostream>
#pragma once

using namespace std;

class Person
{
public:
    Person();
    ~Person();

    enum MovementStates { crawl, stand, walk, run };
    int health;
    void Crawl();
    void Run();
    void Stand();
    void Walk();
    void Damage(int level);

protected:
    MovementStates movementState;
};
