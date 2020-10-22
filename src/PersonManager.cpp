#include "PersonManager.h"

void PersonManager::save(ISaveData *iSavePerson, string data) {
    iSavePerson->save(data);
}

void to_json(json &_json, const Person &person) {
    _json = json{
            {"ID: ",   person.getId()},
            {"Age: ",  person.getAge()},
            {"Name: ", person.getName()},
    };
}

string PersonManager::serialize(const vector<Person> &personList) {
    json jsonData(personList);
    string jsonArray = jsonData.dump(4);
    return jsonArray;
}