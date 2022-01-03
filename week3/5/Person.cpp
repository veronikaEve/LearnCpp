#include "Person.h"

Person::Person() {
    health = 100;
}

Person::~Person() {
}

void Person::Crawl()
{
    movementState = MovementStates::crawl;
    cout << "Crawling" << endl;
}

void Person::Run()
{
    movementState = MovementStates::run;
    cout << "Running" << endl;
}

void Person::Stand()
{
    movementState = MovementStates::stand;
    cout << "Standing" << endl;
}

void Person::Walk()
{
    movementState = MovementStates::walk;
    cout << "Walking" << endl;
}

void Person::Damage(int level) {
    health = health-level;
    cout << "Damaged" << endl;
    cout << "Your health is " << health << endl;

}

