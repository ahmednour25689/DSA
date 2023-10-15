//
//  DoublyLinkedList.hpp
//  CPlusPlus
//
//  Created by Ahmed Nour on 15/10/2023.
//

#ifndef DoublyLinkedList_hpp
#define DoublyLinkedList_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class DoublyLinkedNode {
public:
    int data; //Data to store (could be int,string,object etc)
    DoublyLinkedNode* nextElement;  //Pointer to next element
    DoublyLinkedNode* previousElement;

    DoublyLinkedNode(int data){
        //Constructor to initialize nextElement of newlyCreated Node
        this->data=data;
        nextElement=nullptr;
        previousElement=nullptr;
    }
};


class DoublyLinkedList {
private:
    DoublyLinkedNode* head;
    DoublyLinkedNode* tail;

public:
    int size;
    DoublyLinkedList();
    ~DoublyLinkedList(); // destructor
    bool isEmpty();
    int getHead();
    int getTail();
    int printList();
    int insertTail(int value);
    bool deleteHead();
};

#endif /* DoublyLinkedList_hpp */
