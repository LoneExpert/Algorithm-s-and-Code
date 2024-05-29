#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelorder(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp==NULL){
            // complered traersal
            cout<<endl;
            if(!q.empty()){
                // queue still have child 
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

Node* insertbst(Node* root,int d){
    //base case if d>root go to right otherwise left;

    if(root==NULL){
        root = new Node(d);
        return root;
    }

    if(d>root->data){
        root->right = insertbst(root->right,d);
    }
    else{
        root->left = insertbst(root->left,d);
    }

    return root;    
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node* minval(Node* root){
    Node* temp = root;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}

Node* maxval(Node* root){
    Node* temp = root;
    while(temp->right!=NULL){
        temp = temp->right;
    }
    return temp;
}

Node* deletion(Node* root,int val){
    if(root==NULL){
        return root;
    }

    if(root->data==val){
        //0 child 
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child
            // left child
        if(root->left!=NULL&& root->right==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
            // right child
        if(root->right!=NULL&& root->left==NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        
        }


        //2 or more than 2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini = minval(root->right)->data;
            root->data = mini;
            root->right = deletion(root->right,mini);
            return root;
        }
        
    }
    else if(root->data>val){
        root->left = deletion(root->left,val);
        return root;
    }
    else{
        root->right = deletion(root->right,val);
        return root;
    }
} 

void takeinput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root = insertbst(root,data);
        cin>>data;
    }
}

int main()
{
    Node * root = NULL;
    cout<<"Enter data"<<endl;
    takeinput(root);

    cout<<"The Bst is"<<endl;
    levelorder(root);

    cout<<"inorder"<<endl;
    inorder(root);

    cout<<endl<<"preorder"<<endl;
    preorder(root);

    cout<<endl<<"postorder"<<endl;
    postorder(root);

    cout<<endl<<"The minimum value "<<minval(root)->data<<endl;

    cout<<"The maximum value "<<maxval(root)->data<<endl;
    
    root = deletion(root,30);

    cout<<"The Bst is"<<endl;
    levelorder(root);

    cout<<"inorder"<<endl;
    inorder(root);

    cout<<endl<<"preorder"<<endl;
    preorder(root);

    cout<<endl<<"postorder"<<endl;
    postorder(root);

    cout<<endl<<"The minimum value "<<minval(root)->data<<endl;

    cout<<"The maximum value "<<maxval(root)->data<<endl;

    return 0;
}