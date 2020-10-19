#ifndef LAB07_FILES_SERIALIZATION_TEXTMANAGER_H
#define LAB07_FILES_SERIALIZATION_TEXTMANAGER_H

#include "ISavePerson.h"
#include "ILoadPerson.h"

struct TextManager : public ISavePerson, public ILoadPerson {
public:
    void save(Person person) override;

    string load(const Person &person) override;
};

#endif //LAB07_FILES_SERIALIZATION_TEXTMANAGER_H