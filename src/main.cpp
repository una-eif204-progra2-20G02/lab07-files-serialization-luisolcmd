#include <iostream>
#include "LinkedList.h"
#include "PersonManager.h"
#include "BinaryManager.h"
#include "TextManager.h"

int main() {
    std::cout << "Hello, Universidad Nacional!" << std::endl;

    PersonManager personManager;
    BinaryManager binaryManager;
    TextManager textManager;

    Person Per1(26345, 30, "William");
    Person Per2(53455, 25, "Dennis");
    Person Per3(74803, 54, "Bill");

    LinkedList PersonList;
    PersonList.addBack(Per1);
    PersonList.addBack(Per2);
    PersonList.addBack(Per3);

    //DIP Implementation
    personManager.save(&binaryManager,Per1);
    personManager.save(&binaryManager,Per2);
    personManager.save(&binaryManager,Per3);

    personManager.save(&textManager,Per1);
    personManager.save(&textManager,Per2);
    personManager.save(&textManager,Per3);

    return 0;
}