#include "BinaryManager.h"

void BinaryManager::save(string data) {
    char aux[132];
    strcpy(aux, data.c_str());
    ofstream archive;
    try { archive.open("BinaryFile.dat", ios::app | ios::binary); }
    catch (std::ifstream::failure dat) { throw std::runtime_error("Error "); }
    archive.write((char *) &aux, sizeof(char32_t[132]));
    archive.close();
}