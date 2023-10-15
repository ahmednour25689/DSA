//
//  Graph.cpp
//  CPlusPlus
//
//  Created by Ahmed Nour on 15/10/2023.
//

#include "Graph.hpp"
#include <iostream>

using namespace std;
void Graph :: addEdge(int source, int destination) {
    if (source < vertices && destination < vertices)
        array[source].insertAtHead(destination);
}

void Graph :: printGraph() {
    cout << "Adjacency List of Directed Graph" <<endl;
    Node*temp;
    for(int i=0; i<vertices; i++) {
        cout << "|" << i << "| => ";
        temp = (array[i]).getHead();

        while(temp != NULL) {
            cout <<  "[" <<temp->data << "] -> ";
            temp = temp->nextElement;
        }
        cout <<"NULL"<<endl;
    }
    }
