#ifndef LAB07_FILES_SERIALIZATION_ISAVEPERSON_H
#define LAB07_FILES_SERIALIZATION_ISAVEPERSON_H

#include "Person.h"
#include <fstream>

using std::endl;
using std::ios;
using std::ofstream;
using std::ifstream;

class ISavePerson {
public:
    virtual ~ISavePerson();

    virtual void save(Person person) = 0;

    virtual string load(const Person &person) = 0;
};

#endif //LAB07_FILES_SERIALIZATION_ISAVEPERSON_H