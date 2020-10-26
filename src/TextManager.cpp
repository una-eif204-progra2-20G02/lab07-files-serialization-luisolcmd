#include "TextManager.h"

void TextManager::save(string data) {
    ofstream archive;
    try { archive.open("TextFile.json", ios::app); }
    catch (std::ifstream::failure txt) { throw std::runtime_error("Error "); }
    archive << data << endl;
    archive.close();
}