#ifndef LAB07_FILES_SERIALIZATION_PERSON_H
#define LAB07_FILES_SERIALIZATION_PERSON_H

#include <sstream>

using std::string;

class Person {
    int Id;
    int Age;
    string Name;

public:
    Person();

    Person(int id, int age, const string &name);

    virtual ~Person();

    int getId() const;

    void setId(int id);

    int getAge() const;

    void setAge(int age);

    const string &getName() const;

    void setName(const string &name);

    virtual std::string toString() const;
};

#endif //LAB07_FILES_SERIALIZATION_PERSON_H