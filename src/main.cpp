#include <iostream>
#include "PersonManager.h"
#include "BinaryManager.h"
#include "TextManager.h"

int main() {
    std::cout << "Hello, Universidad Nacional!" << std::endl;

    PersonManager personManager;
    BinaryManager binaryManager;
    TextManager textManager;

    vector<Person> personList;
    Person Per1(26345, 30, "William");
    Person Per2(53455, 25, "Dennis");
    Person Per3(74803, 54, "Bill");

    personList.push_back(Per1);
    personList.push_back(Per2);
    personList.push_back(Per3);

    //DIP Implementation               Serialization
    personManager.save(&binaryManager, PersonManager::serialize(personList));
    personManager.save(&textManager, PersonManager::serialize(personList));

    return 0;
}