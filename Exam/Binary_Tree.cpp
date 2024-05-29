#include<iostream>
#include<queue>
#include<map>
#include<utility>


using namespace std;

class Tree{
    public:
        int data;
        Tree *left;
        Tree *right;
    
    Tree(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Tree* buildtree(Tree* root){
    cout<<"Enter your data "<<endl;
    int data;
    cin>>data;
    root = new Tree(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter the data of left of "<<data<<endl;
    root->left = buildtree(root->left);
    cout<<"Enter the data of right of "<<data<<endl;
    root->right = buildtree(root->right);

    return root;
}

void inorder(Tree* root){

    if(root==NULL)return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Tree* root){
    if(root==NULL)return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Tree* root){
    if(root==NULL)return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void levelorder(Tree* root){
    queue<Tree*>q;
    q.push(root);
    // q.push(NULL);
    while(!q.empty()){
        Tree* temp = q.front();
        cout<<temp->data<<" ";
        // cout<<endl;
        q.pop();
        // if(temp==NULL){
        //     cout<<endl;
        //     if(!q.empty()){
        //         q.push(NULL);
        //     }
        // }
        // else{
            if(temp->left){
                q.push(temp->left);
            }   
            if(temp->right)
                q.push(temp->right);
            }
        // }
    }

    vector<int>topview(Tree* root){
        vector<int>Topview;
        if(root==NULL)Topview;
        map<int,int>mp;
        queue<pair<Tree*,int>>q;
        q.push({root,0});

        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Tree* node = it.first;
            int line = it.second;

            if(mp.find(line)==mp.end())mp[line] = node->data;

            if(node->left!=NULL){
                q.push({node->left,line-1});
            }
            if(node->right!=NULL){
                q.push({node->right,line+1});
            }
        }
        for(auto it:mp){
            Topview.push_back(it.second);
        }
        return Topview;
    }

    vector<int>bottomview(Tree* root){
        vector<int>Bottomview;
        if(root==NULL)Bottomview;
        map<int,int>mp;
        queue<pair<Tree*,int>>q;
        q.push({root,0});

        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Tree* node = it.first;
            int line = it.second;

            mp[line] = node->data;

            if(node->left!=NULL){
                q.push({node->left,line-1});
            }
            if(node->right!=NULL){
                q.push({node->right,line+1});
            }
        }
        for(auto it:mp){
            Bottomview.push_back(it.second);
        }
        return Bottomview;
    }


int main()
{
    Tree* root = NULL;
    root = buildtree(root);

    // print tree
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // Inorder LNR
    //         1
    //     3       5
    //  7    11   17
    // => 7 3 11 1 17 5

    // Preorder NLR
    //         1
    //     3       5
    //  7    11   17
    // => 1 3 7 11 5 17 

    // Postorder LRN
    //         1
    //     3       5
    //  7    11   17
    // => 7 11 3 17 5 1
    levelorder(root);
    cout<<endl;
    cout<<"Inorder "<<endl;     
    inorder(root);

    cout<<endl;
    cout<<"Preorder "<<endl;
    preorder(root);

    cout<<endl;
    cout<<"Postorder "<<endl;
    postorder(root);

    cout<<endl<<"Top View"<<endl;
    vector<int>Topview;
    Topview = topview(root);

    for(int i=0;i<Topview.size();i++){
        cout<<Topview[i]<<" ";
    }
    cout<<endl;


    cout<<"Bottom View"<<endl;
    vector<int>Bottomview;
    Bottomview = bottomview(root);

    for(int i=0;i<Bottomview.size();i++){
        cout<<Bottomview[i]<<" ";
    }
    cout<<endl;


    return 0;
}