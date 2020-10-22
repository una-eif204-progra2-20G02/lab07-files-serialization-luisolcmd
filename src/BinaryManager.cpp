#include "BinaryManager.h"

void BinaryManager::save(string data) {
    ofstream archive;
    try { archive.open("BinaryFile.dat", ios::app | ios::binary); }
    catch (std::ifstream::failure dat) { throw std::runtime_error("Error "); }
    archive.write((char *) &data, sizeof(Person));
    archive.close();
}