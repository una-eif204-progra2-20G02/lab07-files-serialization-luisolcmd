#ifndef LAB07_FILES_SERIALIZATION_ILOADPERSON_H
#define LAB07_FILES_SERIALIZATION_ILOADPERSON_H

#include "sstream"
#include "Person.h"

using std::string;
using std::ifstream;

class ILoadPerson {
public:
    virtual ~ILoadPerson();

    virtual string load(const Person &person) = 0;
};

#endif //LAB07_FILES_SERIALIZATION_ILOADPERSON_H