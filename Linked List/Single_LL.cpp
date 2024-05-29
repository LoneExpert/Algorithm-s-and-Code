#include <iostream>
using namespace std;


// the name convention matter
class node
{
public:
    int data;
    node *next;


    // Contructor 
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~node(){
        int value = this->data;
        //memory free
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free "<<value<<endl;
    }
};

void InsertAtHead(node* &head, int d){ // refrence because i don't need any more copy 

    // new node create
    node* temp = new node(d);
    temp->next = head;
    head = temp;

}

void InsertAtTail(node* &tail, int d){
    // new node create
    node* temp = new node(d);
    tail->next = temp;
    // tail = tail->next;  
    tail = temp;  
}

void InsertAtPosition(node* &head,node* &tail, int position, int d){

    // insert at head
    if(position==1){
        InsertAtHead(head,d);
        return; //otherwise double will be printed
    }
    node* temp = head;
    int count = 1; //because I am at head
    while(count<position-1){
        temp=temp->next;
        count++;
    }

    // insert at tail
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return; //otherwise double will be printed
    }
    node* nodetobeinsert = new node(d);
    nodetobeinsert->next = temp->next; // point to next node
    temp->next = nodetobeinsert; // break the loop and point to added node in middle

}

void DeleteNode(node* &tail,node* &head, int position){
    
    if(position == 1){
        node* temp = head;
        head=head->next; // moving the head one step ahead
        temp->next=NULL;
        delete temp;
    }
    else{
        node* prev = NULL;
        node* curr = head;

        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        if(curr->next==NULL){
            tail=prev;
        }
        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void printll(node* &head){
    node* temp = head;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next; // iterating to move forward
    }
    cout<<endl;
}

node* floydDetectionLoop(node* head){
    if(head==NULL){
        return NULL;
    }
    node* slow = head; 
    node* fast = head; 

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;

        if(slow==fast){
            // return true;
            cout<<"Present at "<<slow->data<<endl;
            return slow; //function is node* can'r return true of false
        }
    }
    return NULL;
}

node* getStartingloopnode(node* head){
    node* intersection = floydDetectionLoop(head);
    if(intersection==NULL){
        return NULL;
    }
    node* slow = head;

    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeloop(node* head){
    if(head==NULL){
        return;
    }
    node* startofloop = getStartingloopnode(head);
    node* temp = startofloop;

    while(temp->next!=startofloop){
        temp=temp->next;
    }
    temp->next=NULL;
}

int main()
{
    // creating new node
    node *node1 = new node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    node* head = node1;
    node* tail = node1;
    printll(head);

    // InsertAtHead(head,12);
    // printll(head);

    // InsertAtHead(head,15);
    // printll(head);

    InsertAtTail(tail,12);
    printll(head);

    InsertAtTail(tail,15);
    printll(head);

    // InsertAtPosition(head,3,22);
    // printll(head);
    
    InsertAtPosition(head,tail,4,100);
    printll(head);

    // cout<<"head"<<head->data<<endl;
    // cout<<"Tail"<<tail->data<<endl;

    // DeleteNode(tail,head,4);
    // printll(head);


    tail->next=head->next; 
     if(floydDetectionLoop(head)){
        cout<<"Loop is present"<<endl;
    }
    else{
        cout<<"No loop is present"<<endl;
    }

    cout<<"The starting point of loop "<<getStartingloopnode(head)->data<<endl;

    removeloop(head);
    printll(head);
    

    return 0;
} 