//
//  LinkedList.h
//  CPlusPlus
//
//  Created by Ahmed Nour on 09/09/2023.
//

#ifndef LinkedList_h
#define LinkedList_h
#include "Node.h"
class LinkedList {
private:
    Node* head;
public:

    LinkedList() ;
    Node* getHead();
    bool isEmpty();
    void insertAtHead(int value);
    void insertAtTail(int value);
    bool printList();
};

#endif /* LinkedList_h */
