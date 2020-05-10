#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include "graph/topologicalsort/Graph.h"
#include "graph/topologicalsort/TopologicalSort.h"


using namespace std;
int main() {

    vector<Edge> edges {
            {0,6},{1,2},{1,4},{1,6},{3,0},
            {5,1},{7,0},{7,1}

    };

    int n=8;
    // Create a graph
    Graph graph (edges,8);


    // Sorted List
    vector<int> sortedList;
    //Perform TopologicalSort
    TopologicalSort tsort(graph,sortedList,n);
    if(tsort.doTopologicalSort()){
        for(int i : sortedList){
            cout<< i << " ";
        }
    }else{
        cout<< " Graph has at least one cycle. "
               " Topological sorting is not possible ";
    }




return 0;
}
