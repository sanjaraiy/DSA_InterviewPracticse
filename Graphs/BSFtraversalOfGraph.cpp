#include<iostream>
#include<unordered_map>
#include<queue>
#include<list>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<int>>adjList;

    void addEdge(int u, int v, bool direction){
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

    void bsfTraversal(int src,unordered_map<int,bool>&visited){
         queue<int>q;
         q.push(src);
         visited[src]=true;
         while(!q.empty()){
            int frontNode=q.front();
            visited[frontNode]=true;
            q.pop();
            cout<<frontNode<<", ";

            //insert neighbours
            for(auto neighbour:adjList[frontNode]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour]=true;
                }
            }

         }
         
    }
};

int main(){
    Graph g;

    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(3,5,0);
    g.addEdge(3,7,0);
    g.addEdge(7,6,0);
    g.addEdge(7,4,0);

    g.printAdjacencyList();
    cout<<endl;

    cout<<"BFS Traversal:"<<endl;
    unordered_map<int,bool>visited;
    //run a loop for all nodes
    for(int i=0;i<=7;i++){
        if(!visited[i]){
            g.bsfTraversal(i,visited);
        }
    }
    
   
   
    return 0;
}
