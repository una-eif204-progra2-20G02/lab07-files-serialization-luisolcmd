#ifndef LAB07_FILES_SERIALIZATION_TEXTSAVE_H
#define LAB07_FILES_SERIALIZATION_TEXTSAVE_H

#include "ISavePerson.h"

struct TextSave : public ISavePerson {
public:
    void save(Person person) override;

    string load(const Person &person) override;
};

#endif //LAB07_FILES_SERIALIZATION_TEXTSAVE_H