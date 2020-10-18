#include <iostream>
#include "LinkedList.h"

int main() {
    std::cout << "Hello, Universidad Nacional!" << std::endl;
    Person Per1(26345, 30, "William");
    Person Per2(53455, 25, "Dennis");
    Person Per3(74803, 54, "Bill");

    LinkedList PersonList;
    PersonList.addBack(Per1);
    PersonList.addBack(Per2);
    PersonList.addBack(Per3);

    return 0;
}