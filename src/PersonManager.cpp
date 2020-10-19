#include "PersonManager.h"

void PersonManager::save(ISavePerson *iSavePerson, Person person) {
    iSavePerson->save(person);
}

string PersonManager::load(ILoadPerson *iLoadPerson, const Person &person) {
    return iLoadPerson->load(person);
}