#ifndef LAB07_FILES_SERIALIZATION_NODE_H
#define LAB07_FILES_SERIALIZATION_NODE_H

#include "Person.h"

class Node {
    Person data;
    Node *prev;
    Node *next;

    friend class LinkedList;
};


#endif //LAB07_FILES_SERIALIZATION_NODE_H
