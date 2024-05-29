#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>


// generic class
class graph{
    public:
        unordered_map<T,list<T>>adj;

        void addEdge(int u, int v, bool direction){
            // direction == 0  undirected
            // direction == 1  directed

            // create an edge u and v;
            adj[u].push_back(v);

            if(direction == 0){
                adj[v].push_back(u);
            }
        }

        void printAdjList(){
            for(auto i:adj){
                cout<<i.first<<"->";
                for(auto j:i.second){
                    cout<<j<<",";
                }
                cout<<endl; 
            }
        }

    
};

int main()
{
    int n;
    cout<<"Enter the number of node"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the number of edges"<<endl;
    cin>>m;


    graph<int>g;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        // ubndirected graph
        g.addEdge(u,v,0);
    }

    // print
    g.printAdjList();

    return 0;
}



/*

#include <bits/stdc++.h> 
#include <queue> 
#include <unordered_map> 
#include <list> 


void preparelist(unordered_map<int,list<int>>&adj, vector<pair<int, int>> &edges){
    for(int i=0;i<edges.size();i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}

void tree(unordered_map<int,list<int>>&adj,unordered_map<int,bool>&vis,vector<int>&ans,int node){

    queue<int>q;
    q.push(node);
    vis[node]=1;

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();
        ans.push_back(frontNode);

        // traverse all neighbour
        for(auto i:adj[frontNode]){
            if(!vis[i]){
                q.push(i);
                vis[i]=1;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here
    unordered_map<int,list<int>>adj;
    vector<int>ans;
    unordered_map<int,bool>vis;

    preparelist(adj,edges);

    // traverse all compinents of graph
    for(int i=0;i<vertex;i++){
        if(!vis[i]){
            tree(adj,vis,ans,i);
        }
    }

    return ans;
} 

*/