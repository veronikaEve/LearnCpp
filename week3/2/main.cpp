#include "Person.h"
#include "Soldier.h"

int main()
{
    Person myPerson;
    myPerson.Crawl();
    myPerson.Run();
    myPerson.Stand();
    myPerson.Walk();

    Soldier mySoldier;
    mySoldier.FireWeapon();
}
