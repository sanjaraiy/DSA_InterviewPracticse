#include<iostream>
#include<vector>
using namespace std;

//--------------------Adjacency Matrix-----------------------
//***************Unweighted graph*************
// int main(){
//     int n;
//     cout<<"Enter the number of nodes:"<<endl;
//     cin>>n;

//     vector<vector<int>>adj(n,vector<int>(n,0));

//     int e;
//     cout<<"Enter the number of edges:"<<endl;
//     cin>>e;

//     for(int i=0;i<e;i++){
//         int u,v;
//         cin>>u>>v;
//         //mark 1
//         adj[u][v]=1;
//     }

//     //printing
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<adj[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }


//***********************weighted graph*************************
int main(){
    int n;
    cout<<"Enter the number of nodes:"<<endl;
    cin>>n;

    vector<vector<int>>adj(n,vector<int>(n,0));

    int e;
    cout<<"Enter the number of edges:"<<endl;
    cin>>e;

    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        
        int distance;
        cin>>distance;

        //mark distance
        adj[u][v]=distance;
    }

    //printing
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

}