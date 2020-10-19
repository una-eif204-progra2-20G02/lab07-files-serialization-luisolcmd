#include "TextManager.h"

void TextManager::save(Person person) {
    ofstream archive;
    try { archive.open("TextFile.txt", ios::app); }
    catch (std::ifstream::failure txt) { throw std::runtime_error("Error "); }
    archive << "\t<<Person List>>\n";
    archive << person.toString();
    archive.close();
}

string TextManager::load(const Person &person) {
    string text;
    ifstream archive;
    try { archive.open("TextFile.txt", ios::in); }
    catch (std::ifstream::failure txt) { throw std::runtime_error("Error "); }
    std::ostringstream output;
    output << endl;
    while (!archive.eof()) {
        getline(archive, text);
        output << text << endl;
    }
    archive.close();
    return output.str();
}