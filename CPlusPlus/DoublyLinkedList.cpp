//
//  DoublyLinkedList.cpp
//  CPlusPlus
//
//  Created by Ahmed Nour on 15/10/2023.
//

#include "DoublyLinkedList.hpp"
#include <iostream>

using namespace std;

DoublyLinkedList::DoublyLinkedList() {
    // Doubly linkedlist constructor
    head=nullptr;
    tail=nullptr;
    size=0;
}

DoublyLinkedList::~DoublyLinkedList() {
    // Doubly linkedlist destructor
    DoublyLinkedNode *current = head;
    DoublyLinkedNode* next;
    while (current)
    {
        next = current->nextElement;
        delete current;
        current = next;
    }
}

bool DoublyLinkedList::isEmpty() {      // check if the list is empty
    if(head == nullptr) //Check whether the head points to null
    {
        return true;
    } else {
        return false;}
}

int DoublyLinkedList::getHead(){
    if (!(isEmpty())){
        return head->data;
    } else {
        return -1;
    }
}

int DoublyLinkedList::getTail(){
    if (!(isEmpty())){
        return tail->data;
    } else {
        return -1;
    }
}

int DoublyLinkedList::printList() {    // printing all elements of the list
    if (isEmpty()) {
        cout << "List is Empty!" << endl;
        return false;
    }
    DoublyLinkedNode *temp = head;   // temp points to head of the list
    cout << "List : ";

    while (temp != nullptr) {    // traverse through the list
        cout << temp->data << "->"  ;
        temp = temp->nextElement;
    }
    cout  << "null " << endl;
    return true;
}

int DoublyLinkedList::insertTail(int value) {    // insert value at tail
    DoublyLinkedNode * newNode = new DoublyLinkedNode(value);
    if (isEmpty()) {
        head=newNode;
        tail=newNode;
    }
    else {
        newNode->previousElement = tail;
        tail->nextElement = newNode;
        tail = newNode;
    }
    size++;

    return tail->data;
}

bool DoublyLinkedList::deleteHead() {
    bool deleted = false;
    if (this->isEmpty()) {
        cout << "List is Empty" << endl;
        return deleted;
    }
    DoublyLinkedNode* nodeToRemove = head;

    if (size == 1) {
        head = nullptr;
        tail = nullptr;
    } else {
        head = head->nextElement;

        head->previousElement = nullptr;
        nodeToRemove->nextElement = nullptr;
    }
    delete nodeToRemove;
    size--;
    return true;
}

