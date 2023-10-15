//
//  main.cpp
//  CPlusPlus
//
//  Created by Ahmed Nour on 08/09/2023.
//

#include <iostream>
#include "LinkedList.h"
#include "Node.h"
#include "DoublyLinkedList.hpp"
#include "Graph.hpp"

using namespace std;

//Function inserts a value/new Node as the first Element of list
void LinkedList::insertAtHead(int value) {
    Node* newNode = new Node();
    newNode -> data = value;
    newNode -> nextElement = head;
    head = newNode;
    cout << value << " Inserted !\n";
}

void LinkedList::insertAtTail(int value) {
    // Enter your code here
    if (isEmpty()) {
        insertAtHead(value);
    }
    else{
        Node * newNode = new Node();
        newNode -> data = value;
        newNode -> nextElement = nullptr;
        Node* last = head;
        while (last -> nextElement != nullptr) {
            last = last -> nextElement;
        }
        last -> nextElement = newNode;
    }

}

class myQueue {
private:
    DoublyLinkedList items;
    int numElements;

public:
    myQueue() {
        numElements = 0;
    }
    int isEmpty() {
        return (items.size == 0);
    }

    int getFront() {
        if (!(items.isEmpty())) {
            return items.getHead();
        }else {
            return -1;
        }
    }

    int getSize() {
        return items.size;
    }

    int enqueue(int value) {
        return items.insertTail(value);
    }

    int dequeue() {
        return items.deleteHead();
    }

    int getTail() {
        if (!(items.isEmpty())) {
            cout << "getTail(): " << items.getTail() << endl;
            return items.getTail();
        } else {
            return -1;
        }
    }

    bool showqueue() {
        return items.printList();
    }


};



int main(int argc, const char * argv[]) {
    // insert code here...
  //  LinkedList linkedList;

    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    cout << endl;
    g.printGraph();

//    myQueue q;
//    for(int i=1; i<=5; i++) {
//        q.enqueue(i);      // inserting data in queue
//        q.showqueue();
//    }
//
//    q.getFront();
//    q.getTail();
//    q.getSize();  // size of queue
//
//    while (q.isEmpty() == false)
//    {
//        q.dequeue();
//         cout<< "Dequeue() " << endl;
//        q.showqueue();
//    }

//    cout << linkedList.isEmpty() << endl;
//
//    for(int i= 1; i < 10; i++) {
//        linkedList.insertAtTail(i);
//        linkedList.printList();
//
//    }
    return 0;
}
