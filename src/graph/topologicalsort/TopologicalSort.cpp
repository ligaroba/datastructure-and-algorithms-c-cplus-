//
// Created by RLIGAYE on 5/8/2020.
//

#include <iostream>
#include "TopologicalSort.h"

TopologicalSort::TopologicalSort(const Graph &graph, vector<int> &sortedList, int n)
:graph(graph),sortedList(sortedList),n(n){

}

bool TopologicalSort::doTopologicalSort() {

    tSortIndegree=graph.getIndegree();//making a copy of the indegree reference
     // Set all nodes with no incoming edges
     vector<int> nodesToExplore;
     for(int i =0; i<n;i++){
        if(!tSortIndegree[i]){
            nodesToExplore.push_back(i);
        }
     }

     while(!nodesToExplore.empty()){
         //Remove node n from S
         int incomingNode = nodesToExplore.back();

         nodesToExplore.pop_back();
         // add incomingNode to the tail of sortedList
         sortedList.push_back(incomingNode);
         vector<int> children = graph.getAdjList()[incomingNode];
         for(int destinationNode : children ){
                // remove incoming edge  incomingNode to destinationNode from graph
                tSortIndegree[destinationNode]-=1;

                //check if destinationNode has no more incoming nodes is yes insert to stack
                if(!tSortIndegree[destinationNode]){
                    nodesToExplore.push_back(destinationNode);
                }


         }

     }

     // Check if the  graph still has edges
     for (int i =0; i<n;i++){
         if(tSortIndegree[i]){
            return false;
         }
     }
     return true;
}
TopologicalSort::~TopologicalSort() {
    cout<< " Deconstructing TopologicalSort "<< "\n " << endl ;
}