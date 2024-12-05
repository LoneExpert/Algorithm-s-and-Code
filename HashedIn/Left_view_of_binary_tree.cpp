// Given a Binary Tree, the task is to print the left view of the Binary Tree. 
// The left view of a Binary Tree is a set of leftmost nodes for every level.


// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node* Left;
//         Node* Right;
    
//         Node(int val){
//             data = val;
//             Left = NULL;
//             Right = NULL;
//         }
// };


// // function for input the new node
// Node* insertNode(Node* node,int val){

//     if(!node){
//         return new Node(val);
//     }

//     queue<Node*>q;
//     q.push(node);

//     while(!q.empty()){
//         Node* current = q.front();
//         q.pop();

//         if(!current->Left){
//             current->Left = new Node(val);
//             break;
//         }
//         else{
//             q.push(current->Left);
//         }
//         if(!current->Right){
//             current->Right =  new Node(val);
//             break;
//         }
//         else{
//             q.push(current->Right);
//         }
//     }
//     return node;
// }

// // Recursive function
// void Rec(Node* node,int level,int &maxlevel, vector<int>&ans){
//     if(!node){
//         return;
//     }

//     if(level>maxlevel){
//         ans.push_back(node->data);
//         maxlevel = level;
//     }
//     Rec(node->Left,level+1,maxlevel,ans);
//     Rec(node->Right,level+1,maxlevel,ans);
// }

// // Left view
// vector<int> leftView(Node* node){
//     vector<int>ans;
//     int maxlevel = -1;
//     Rec(node,0,maxlevel,ans);
//     return ans;
// }

// void printans(vector<int>&ans){
//     for(int val: ans){
//         cout<<val<<" ";
//     }
//     cout<<endl;
// }

// int main()
// {   
//     Node* root = NULL;
    
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         int val;
//         cin>>val;
//         root = insertNode(root,val);
//     }

//     vector<int>res = leftView(root);

//     printans(res);

//     return 0;
// }

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* Left = NULL;
    Node* Right = NULL;

    Node(int val){
        data = val;
        Left = NULL;
        Right = NULL;
    }
};

Node* insertnode(Node* node, int val){
    if(!node){
        return new Node(val);
    }

    queue<Node*>q;
    q.push(node);

    while(!q.empty()){
        Node* current = q.front();
        q.pop();

        if(!current->Left){
            current->Left = new Node(val);
            break;
        }
        else{
            q.push(current->Left);
        }
        if(!current->Right){
            current->Right = new Node(val);
            break;
        }
        else{
            q.push(current->Right);
        }   
    }
    return node;
}

void rec(Node* node,int level,int &maxlevel,vector<int>&ans){

    if(!node){
        return;
    }

    if(level>maxlevel){
        ans.push_back(node->data);
        maxlevel = level;
    }
    rec(node->Left,level+1,maxlevel,ans);
    rec(node->Right,level+1,maxlevel,ans);
}

void printtre(vector<int>&ans){
    for(int val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
 
}

vector<int> leftview(Node* node){
    vector<int>ans;
    int maxlevel = -1;
    rec(node,0,maxlevel,ans);
    return ans;
}

int main()
{
    Node* root = NULL;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        root = insertnode(root,val);
    }

    vector<int>res = leftview(root);

    printtre(res);

    return 0;
}