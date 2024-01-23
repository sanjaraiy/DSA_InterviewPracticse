#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<int>>adjList;

    void addEdge(int u,int v,bool direction){
       adjList[u].push_back(v);
       if(direction==0){
        adjList[v].push_back(u);
       }
    }

    void printAdjacencyList(){
        for(auto node:adjList){
           cout<<node.first<<"->";
           for(auto neighbour:node.second){
            cout<<neighbour<<", ";
           }
           cout<<endl;
        }
    }

    void DFSTraversal(int src, unordered_map<int, bool>&visited){
        //step1:-printing
          cout<<src<<", ";
        //mark the visited node
          visited[src]=true;
        //to recursively call the neighbour nodes
          for(auto neighbour:adjList[src]){
            if(!visited[neighbour]){
                DFSTraversal(neighbour,visited);
            }
          }
    }
};

int main(){
     Graph g;
     int n=8;

    g.addEdge(0,1,0);
    g.addEdge(1,6,0);
    g.addEdge(1,4,0);
    g.addEdge(4,5,0);
    g.addEdge(4,3,0);
    g.addEdge(3,2,0);
    g.addEdge(3,7,0);

    // g.printAdjacencyList();
    // cout<<endl;

    cout<<"DFS Traversal:"<<endl;
    unordered_map<int,bool>visited;
    //run a loop for all nodes
    for(int i=0;i<n;i++){
        if(!visited[i]){
            g.DFSTraversal(i,visited);
        }
    }


  }