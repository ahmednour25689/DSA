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
    int vertices;
    // array of linked list
    LinkedList* array;    
    public:
    Graph(int vertices) {
        //Creating a new LinkedList for each vertex/index of the array
        this -> vertices = vertices;
        array = new LinkedList[vertices];
    }
    
    void addEdge(int source, int destination);
    void printGraph();
};
#endif /* Graph_hpp */
