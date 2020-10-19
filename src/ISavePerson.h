#ifndef LAB07_FILES_SERIALIZATION_ISAVEPERSON_H
#define LAB07_FILES_SERIALIZATION_ISAVEPERSON_H

#include <fstream>

using std::endl;
using std::ios;
using std::ofstream;

#include "Person.h"

class ISavePerson {
public:
    virtual ~ISavePerson();

    virtual void save(Person person) = 0;

};

#endif //LAB07_FILES_SERIALIZATION_ISAVEPERSON_H