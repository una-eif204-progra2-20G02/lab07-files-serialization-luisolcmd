#ifndef LAB07_FILES_SERIALIZATION_ISAVEDATA_H
#define LAB07_FILES_SERIALIZATION_ISAVEDATA_H

#include <fstream>

using std::endl;
using std::ios;
using std::ofstream;

#include "Person.h"

class ISaveData {
public:
    virtual ~ISaveData();

    virtual void save(string data) = 0;

};

#endif //LAB07_FILES_SERIALIZATION_ISAVEDATA_H