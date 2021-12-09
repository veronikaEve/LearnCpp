#include "Person.h"

void Person::Crawl()
{
    cout << "Crawling" << endl;
}

void Person::Run()
{
    cout << "Running" << endl;
}

void Person::Stand()
{
    cout << "Standing" << endl;
}

void Person::Walk()
{
    cout << "Walking" << endl;
}

int main()
{
    Person myPerson;
    myPerson.Crawl();
    myPerson.Run();
    myPerson.Stand();
    myPerson.Walk();
}