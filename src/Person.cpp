#include "Person.h"

Person::Person() {}

Person::Person(int id, int age, const string &name) : Id(id), Age(age), Name(name) {}

Person::~Person() {}

int Person::getId() const {
    return Id;
}

void Person::setId(int id) {
    Id = id;
}

int Person::getAge() const {
    return Age;
}

void Person::setAge(int age) {
    Age = age;
}

const string &Person::getName() const {
    return Name;
}

void Person::setName(const string &name) {
    Name = name;
}

std::string Person::toString() const {
    std::ostringstream output;
    output << "Id: " << getId()
           << ", Age: " << getAge()
           << ", Name: " << getName();
    return output.str();
}