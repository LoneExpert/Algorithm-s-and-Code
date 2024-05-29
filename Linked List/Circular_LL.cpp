#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int data){
            this->data=data;
            this->next=NULL;
        }x
        ~node(){
            int value=this->data;
            while(next!=NULL){
                delete next;
                next=NULL;
            }
            cout<<"Memort has been cleared "<<value<<endl;
        }
};

void InsertAtHead(node* &tail, int element, int d){

    //empty list
    if(tail==NULL){
        node* temp = new node(d);
        tail = temp;
        temp->next=temp;
    }
    else{
        // on empty list
        // assuming that the element is present in the list
        node* curr = tail;
        while(curr->data!=element){
            curr=curr->next;
        }

        // element found -> curr is on that element node
        node* temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void DeleteNodeCll(node* &tail, int value){

    // empty list
    if(tail==NULL){
        cout<<"The list is empty"<<endl;
    }
    else{
        //non-empty
        // assuming that value is present in the ll
        node* prev = tail;
        node* curr = prev->next;

        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }

        // if(curr->next==NULL){
            
        // }

        prev->next = curr->next;
        // 1 node cll
        if(curr==prev){
            tail=NULL;
        }
        // >=2 node cll
        else if(tail == curr){
            tail=prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void printcll(node* &tail){
    node* temp = tail;

    // empty cll
    if(tail==NULL){
        cout<<"Circular Linked List is empty"<<endl;
        return;
    }
    do
    {
        cout<<tail->data<<" ";
        tail = tail->next;  
    } while (tail!=temp);
    cout<<endl;
    
}



int main()
{
    // node* node1 = new node();
    node* tail = NULL;
    // inserting in a empty list
    InsertAtHead(tail,5,3);
    printcll(tail); 

    InsertAtHead(tail,3,5);
    printcll(tail); 

    InsertAtHead(tail,5,9);
    printcll(tail); 

    InsertAtHead(tail,3,10);
    printcll(tail); 
    
    InsertAtHead(tail,5,20);
    printcll(tail); 

    DeleteNodeCll(tail,3);
    printcll(tail);

    return 0;
}