//
//  main.cpp
//  CPlusPlus
//
//  Created by Ahmed Nour on 08/09/2023.
//

#include <iostream>
#include "LinkedList.h"
#include "Node.h"
using namespace std;

//Function inserts a value/new Node as the first Element of list
void LinkedList::insertAtHead(int value) {
    Node* newNode = new Node();
    newNode -> data = value;
    newNode -> nextElement = head;
    head = newNode;
    cout << value << " Inserted !\n";
}

int main(int argc, const char * argv[]) {
    // insert code here...
    LinkedList linkedList;
    cout << linkedList.isEmpty() << endl;
    for(int i= 0; i < 10; i++) {
        linkedList.insertAtHead(i);
    }
    return 0;
}
