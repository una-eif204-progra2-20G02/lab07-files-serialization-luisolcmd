#include "LinkedList.h"

LinkedList::LinkedList() {
    header = new Node;
    trailer = new Node;
    header->next = trailer;
    trailer->prev = header;
    header->prev = NULL;
    trailer->next = NULL;
}

LinkedList::~LinkedList() {
    while (header->next != trailer)
        removeFront();
    delete header;
    delete trailer;
}

Person LinkedList::getFront() const {
    return header->next->data;
}

Person LinkedList::getBack() const {
    return trailer->prev->data;
}

void LinkedList::addFront(Person dat) {
    Node *node = new Node;
    node->data = dat;
    node->prev = header;
    node->next = header->next;
    header->next->prev = node;
    header->next = node;
}

void LinkedList::addBack(Person dat) {
    Node *node = new Node;
    node->data = dat;
    node->prev = trailer->prev;
    node->next = trailer;
    trailer->prev->next = node;
    trailer->prev = node;
}

void LinkedList::removeFront() {
    Node *node = header->next->next;
    delete header->next;
    header->next = node;
    node->prev = header;
}

void LinkedList::removeBack() {
    Node *node = trailer->prev->prev;
    delete trailer->prev;
    trailer->prev = node;
    node->next = trailer;
}

string LinkedList::getReverse() {
    std::ostringstream output;
    Node *node = trailer->prev;
    while (node != header) {
        output << node->data.toString() << std::endl;
        node = node->prev;
    }
    return output.str();
}

string LinkedList::getForward() {
    std::ostringstream output;
    Node *node = header->next;
    while (node != trailer) {
        output << node->data.toString() << std::endl;
        node = node->next;
    }
    return output.str();
}