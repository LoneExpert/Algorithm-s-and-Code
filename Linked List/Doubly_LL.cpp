#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~node(){
        int value =  this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free "<<value<<endl;

    }
};

void InsertAtHead(node* &head, node* &tail, int d)
{
    if (head == NULL)
    {
        node* temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node* temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void InsertAtTail(node* &tail, node* &head, int d)
{
    if (tail == NULL)
    {
        node *temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void InsertAtPosition(node* &head, node* &tail, int position, int d)
{
    // insert at head
    if (position == 1)
    {
        InsertAtHead(head, tail, d);
        return; // otherwise double will be printed
    }
    node *temp = head;
    int count = 1; // because I am at head
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // insert at tail
    if (temp->next == NULL)
    {
        InsertAtTail(tail, head, d);
        return; // otherwise double will be printed
    }
    node *nodetobeinsert = new node(d);
    nodetobeinsert->next = temp->next;
    temp->next->prev = nodetobeinsert;
    temp->next = nodetobeinsert;
    nodetobeinsert->prev = temp;
}


void DeleteNodeDll(node* &tail,node* &head, int position){
    
    if(position == 1){
        node* temp = head;
        temp->next->prev=NULL;
        head=temp->next; 
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
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr; //mwmory free
    }
}

// traversin of dll
void printdll(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// lenght of dll
int lengthdll(node *&head)
{

    int len = 0;
    node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

int main()
{

    // node *node1 = new node(100);
    node *head = NULL;
    node *tail = NULL;

    // printdll(head);
    // cout<<lengthdll(head)<<endl;


    InsertAtHead(head, tail, 2);
    printdll(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    InsertAtHead(head, tail, 12);
    printdll(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    InsertAtHead(head, tail, 3);
    printdll(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    InsertAtTail(tail, head, 18);
    printdll(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    InsertAtPosition(head, tail, 3, 21);
    printdll(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    InsertAtPosition(head, tail, 1, 2);
    printdll(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    InsertAtPosition(head, tail, 7, 20);
    printdll(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    DeleteNodeDll(tail,head,7);
    printdll(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;

    return 0;
}