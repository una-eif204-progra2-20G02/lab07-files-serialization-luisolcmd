#ifndef LAB07_FILES_SERIALIZATION_PERSONMANAGER_H
#define LAB07_FILES_SERIALIZATION_PERSONMANAGER_H

#include <../lib/nlohmann/json.hpp>
#include "ISaveData.h"

using std::vector;
using nlohmann::json;

class PersonManager {
public:
    void save(ISaveData *iSavePerson, string data);

    static string serialize(const vector<Person> &personList);
};

#endif //LAB07_FILES_SERIALIZATION_PERSONMANAGER_H