//
// Created by RLIGAYE on 5/8/2020.
//

#ifndef CPP_DS_ALGORITHMS_GRAPH_H
#define CPP_DS_ALGORITHMS_GRAPH_H
#pragma once
#include <vector>
using namespace std;
struct Edge{int src,dest;};


class Graph {


private :
    // Vector to represent AdjList
    vector<vector<int>> adjList;
    // In-degree of a vertex
    vector<int> indegree;
    vector<Edge> edges;
    int n;

public :
    Graph(vector<Edge> const &edges, int n);
    vector<int> getIndegree() const {return indegree;};
    vector<vector<int>> getAdjList() const {return adjList;};
    ~Graph(void);



};




#endif //CPP_DS_ALGORITHMS_GRAPH_H
