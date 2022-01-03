#include "Person.h"
#include "Soldier.h"

int main()
{
// Person *myPerson = new Person();
//    myPerson->Crawl();
//    myPerson->Run();
//    myPerson->Stand();
//    myPerson->Walk();

    Soldier *mySoldier = new Soldier(new Weapon());
    mySoldier->Run();
    mySoldier->FireWeapon();
}
