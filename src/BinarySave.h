#ifndef LAB07_FILES_SERIALIZATION_BINARYSAVE_H
#define LAB07_FILES_SERIALIZATION_BINARYSAVE_H

#include "ISavePerson.h"

struct BinarySave : public ISavePerson {
public:
    void save(Person person) override;

    string load(const Person &person) override;
};

#endif //LAB07_FILES_SERIALIZATION_BINARYSAVE_H