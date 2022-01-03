#include "Person.h"

Person::Person() {
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

