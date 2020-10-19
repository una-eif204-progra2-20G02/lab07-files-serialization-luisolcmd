#include "BinaryManager.h"

void BinaryManager::save(Person person) {
    ofstream archive;
    try { archive.open("BinaryFile.dat", ios::app | ios::binary); }
    catch (std::ifstream::failure dat) { throw std::runtime_error("Error "); }
    archive.write((char *) &person, sizeof(Person));
    archive.close();
}

string BinaryManager::load(const Person &person) {
    ifstream archive;
    try { archive.open("BinaryFile.dat", ios::in | ios::binary); }
    catch (std::ifstream::failure dat) { throw std::runtime_error("Error "); }
    archive.read((char *) &person, sizeof(Person));
    archive.close();
    return "";
}