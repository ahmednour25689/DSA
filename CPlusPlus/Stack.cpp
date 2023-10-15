//
//  Stack.cpp
//  CPlusPlus
//
//  Created by Ahmed Nour on 15/10/2023.
//

#include "Stack.hpp"
#include <cassert>
#include <iostream>
using namespace std;

Stack :: Stack(int size) {
    capacity = size;
    stackArr = new int[size];
    assert(stackArr != NULL);
    numbElements = 0;
}

bool Stack :: isEmpty() {
    return (numbElements == 0);
}

int Stack :: getTop() {
    return  (numbElements == 0 ? -1 : stackArr[numbElements - 1]);
}

bool Stack :: push(int value) {
    if (numbElements < capacity) {
        stackArr[numbElements] = value;
        numbElements++;
        return  true;
    }
    else {
        cout << "Stack Full." << endl;
        return false;
    }
}

int Stack:: pop() {
    if (numbElements == 0) {
        cout << "Stack Empty" << endl;
        return -1;
    }
    else {
        numbElements--;
        return  stackArr[numbElements];
    }
}
int Stack :: getSize() {
    return numbElements;
}

void Stack:: showStack() {
    int i = 0;
    while (i < capacity) {
        cout << '\t' << stackArr[numbElements - 1 - i];
        i++;
    }
    cout << "/n";
}
