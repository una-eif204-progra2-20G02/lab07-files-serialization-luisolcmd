#ifndef LAB07_FILES_SERIALIZATION_PERSONMANAGER_H
#define LAB07_FILES_SERIALIZATION_PERSONMANAGER_H

#include "ISavePerson.h"
#include "ILoadPerson.h"

class PersonManager {
public:
    void save(ISavePerson *iSavePerson, Person person);

    string load(ILoadPerson *iLoadPerson, const Person &person);
};

#endif //LAB07_FILES_SERIALIZATION_PERSONMANAGER_H