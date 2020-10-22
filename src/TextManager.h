#ifndef LAB07_FILES_SERIALIZATION_TEXTMANAGER_H
#define LAB07_FILES_SERIALIZATION_TEXTMANAGER_H

#include <../lib/nlohmann/json.hpp>
#include "ISaveData.h"

using nlohmann::json;

struct TextManager : public ISaveData {
public:
    void save(string data) override;
};

#endif //LAB07_FILES_SERIALIZATION_TEXTMANAGER_H