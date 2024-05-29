#include<iostream>
#include<unordered_map>
#include<queue>

using namespace std;


bool iscycle(int src, unordered_map<int,bool>vis,unordered_map<int,list<int>>adj){
    unordered_map<int,int>parent;

    parent[src] = -1;
    vis[src] = 1;
    queue<int>q;
    q.push(src);

    while(!q.empty()){
        int front = q.front();
        q.pop();

        fr(auto nei: adj[front]){
            if(vis[nei] == true && nei!=parent[front]){
                return true;
            }
            else if(!vis[nei]){
                q.push(nei);
                vis[nei] = 1;
                parent[nei] = front;
            }
        }
    }
    return false;
}

int main()
{
    unordered_map<int,list<int>>adj;
    int m = 3; // size
    for(int i=0;i<m;i++){
        int u = adj[i][0];
        int v = adj[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // to handle disconnected component
    unordered_map<int,bool>vis;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            bool ans = iscycle(i,vis,adj)

            if(ans == 1){
                cout<<"yes"<endl;
            }
        }
    } 
    cout<<"No"<<endl;


    return 0;
}

// // Time => Linear

// same as upper one but one small change is 
    bool ans = iscycledfs(i,-1,vis,adj);

bool iscycledfs(int node, int parent,  unordered_map<int,bool>vis,unordered_map<int,list<int>>adj){
    vis[node] = 1;
    for(auto mei:adj[node]){
        if(!vis[mei]){ // if node is not visted
            bool cycledetec = iscycledfs(nei,node,vis,adj);
            if(cycledetec){
                return true;
            }
            else if(nei!=parent){
                return true;
            }
        }
    }
    return false;
}
// TC => linear 


// ------------------directed--------------

// #include<iostream>
// #include<unordered_map>

// using namespace std;

// bool checkdfs(int node,  unordered_map<int,bool>vis,  unordered_map<int,bool>dfsvis,unordered_map<int,list<int>>adj){
//     vis[node] = 1;
//     dfs[node] = 1;

//     for(auto nei:adj[node]){
//         if(!vis[nei]){
//             bool cycledetec = checkdfs(nei,vis,dfsvis,adj); // move forward
//             if(cycledetec){
//                 return true;
//             }
//             else if(dfs[nei]){
//                 return true;
//             }
//         }
//     }
//     dfsvis[node] = false;
//     return false;   
// }

// int main()
// {
//     unordered_map<int,list<int>>adj;

//     for(int i=0;i<edge.size();i++){
//         int u = edge[i].first;
//         int v = edge[i].second;

//         adj[u].push_back(v);
//     }

//      // call dfs 
//      unordered_map<int,bool>vis;
//      unordered_map<int,bool>dfsvis;

//      for(int i=1;i<=n;i++){
//         if(!vis[i]){
//             bool cycledfs = checkdfs(i,vis,dfsvis,adj);
//             iif(cycledfs){
//                 cout<<"Yes"<<endl;
//             }
//         }
//      }
//      cout<<"no"<<endl;
    
//     return 0;
// }

// Tc == O(n+e)
// sp = O(n); linear