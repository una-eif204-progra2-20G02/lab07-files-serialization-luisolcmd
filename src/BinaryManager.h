#ifndef LAB07_FILES_SERIALIZATION_BINARYMANAGER_H
#define LAB07_FILES_SERIALIZATION_BINARYMANAGER_H

#include "ISaveData.h"
#include <strings.h>

struct BinaryManager : public ISaveData {
public:
    void save(string data) override;
};

#endif //LAB07_FILES_SERIALIZATION_BINARYMANAGER_H