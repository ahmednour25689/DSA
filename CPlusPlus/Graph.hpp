//
//  Graph.hpp
//  CPlusPlus
//
//  Created by Ahmed Nour on 15/10/2023.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <stdio.h>
#include "LinkedList.h"
class Graph {
    private:
    // total number of vertices
    int number;
    // array of linked list
    LinkedList* array;    
    public:
    Graph(int vertices) {
        //Creating a new LinkedList for each vertex/index of the array
        array = new LinkedList[vertices];
    }

};
#endif /* Graph_hpp */
