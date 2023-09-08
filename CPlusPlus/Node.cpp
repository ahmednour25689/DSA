//
//  Node.cpp
//  CPlusPlus
//
//  Created by Ahmed Nour on 09/09/2023.
//

#include <stdio.h>
#include <Node.h>

class Node {


public:
    int data;
    Node* nextItem;
    
    Node() {
        nextItem = nullptr;
    }
};
