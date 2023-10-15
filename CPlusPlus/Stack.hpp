//
//  Stack.hpp
//  CPlusPlus
//
//  Created by Ahmed Nour on 15/10/2023.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>

class Stack {
private:
    int* stackArr;
    int capacity;
    int numbElements;
public:
    Stack(int size);
    bool isEmpty();
    int getTop();
    bool push(int value);
    int pop();
    int getSize();
    void showStack();
};
#endif /* Stack_hpp */
