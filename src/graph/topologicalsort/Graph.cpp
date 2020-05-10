//
// Created by RLIGAYE on 5/8/2020.
//

#include <iostream>
#include "Graph.h"


Graph::Graph(const vector<Edge> &edges, int n): edges(edges),n(n) {
       // Resize the vector to N elements of type vector<int>
       adjList.resize(n);
       //Initialize In degree
       vector<int> temp(n,0);
       indegree=temp;

       // Add edges to the directed graph
       for(auto &edge : edges){
           // add edge from source to destination
           adjList[edge.src].push_back(edge.dest);
           //Increment in degree of the destination vertex by 1
           indegree[edge.dest]++;

       }
}


Graph::~Graph(){
    cout<< " Deconstructing Graph " << endl ;
}