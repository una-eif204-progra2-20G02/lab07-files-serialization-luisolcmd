#ifndef LAB07_FILES_SERIALIZATION_LINKEDLIST_H
#define LAB07_FILES_SERIALIZATION_LINKEDLIST_H

#include "Node.h"

class LinkedList {
    Node *header;
    Node *trailer;

public:
    LinkedList();

    ~LinkedList();

    Person getFront() const; //head

    Person getBack() const; //tail

    void addFront(Person dat);

    void addBack(Person dat);

    void removeFront();

    void removeBack();

    string getReverse();

    string getForward();
};


#endif //LAB07_FILES_SERIALIZATION_LINKEDLIST_H
