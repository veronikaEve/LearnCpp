#include "Person.h"
#include "Soldier.h"

int main()
{
 Person *myPerson = new Person();
//    myPerson->Crawl();
//    myPerson->Run();
//    myPerson->Stand();
//    myPerson->Walk();

    Soldier *mySoldier = new Soldier(new Weapon());
    // Firing one shot and losing one damage
    mySoldier->Stand();
    mySoldier->FireWeapon(myPerson);

    // Firing a round but dont have enough
    mySoldier->Run();
    mySoldier->FireWeapon(20, myPerson);

    // Reload to have enough
    mySoldier->weapon->Reload();
    mySoldier->weapon->Reload();
    mySoldier->weapon->Reload();
    mySoldier->FireWeapon(40, myPerson);

}
