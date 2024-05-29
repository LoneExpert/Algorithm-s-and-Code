#include<iostream>
#include<queue>
using namespace std;

class heap{
    public:
        int arr[100];
        int size=0;

        heap(){
            arr[0]=-1;
            size=0;
        }

        void insert(int val){

            size+=1; // inc size to add the ele
            int index = size;   // mentionnin the updated size
            arr[index]=val; // putting the ele at the last

            while(index>1){
                int parent = index/2;

                if(arr[parent]<arr[index]){ // if it is max heap
                    swap(arr[parent],arr[index]);
                    index=parent; // pointing the index to parent
                }
                else{
                    return;
                }
            }
        } 

        void deletefromheap(){
            if(size==0){
                cout<<"Nothing to delete"<<endl;
                return;
            }

            arr[1]=arr[size]; // step 1
            size--;
            int i=1; // root node is at 1 index
            while(i<size){
                int left = 2*i;
                int right = 2*i+1;

                if(left<size && arr[i]<arr[left]){
                    swap(arr[i],arr[left]);
                    i=left;
                }
                else if(right<size && arr[i]<arr[right]){
                    swap(arr[i],arr[right]);
                    i=right;
                }
                else{
                    return;
                }
            }
        }

        void print(){
            for(int i=1;i<=size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

};

// void heapify(int arr[],int n,int i){
    void heapify(int arr[],int n,int i){

        int parent = i;
        int left = 2*i+1;
        int right = 2*i+2;
        
        if(left<n && arr[parent]<arr[left]){ // change the arrow direction min heap
            parent=left;
        }
        if(right<n && arr[parent]<arr[right]){ // change the arrow directin for min heap
            parent=right;
        }   
        // now parent is changed from i to something..
        if(parent!=i){
            swap(arr[parent],arr[i]);
            heapify(arr,n,parent); // Time Comlpexity O(n)
        }
    }      
    
    void heapsort(int arr[],int n){
        int t=n;

        while(t>1){
            //step 1 
            swap(arr[t],arr[1]);
            t--;

            //step 2
            heapify(arr,t,1); // for root node for its correct pos

            // Time Complexity O(nlogn)
        }
    }


int main()
{
    heap h;
    h.insert(60);
    h.insert(31);
    h.insert(55);
    h.insert(59);
    h.insert(24);
    h.print();

    h.deletefromheap();
    h.print();
    // Time Complexity => O(logn); because it is i/2 for checking for insertion and deletion

    int arr[6] = {-1,54,53,55,52,50};
    int n=5;
    for(int i = n/2;i > 0;i--){
        heapify(arr,n,i);
    }

    cout<<"The heap is"<<endl;

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }   
    cout<<endl;

    // heap sort
    heapsort(arr,n);
    cout<<"The heap sort is"<<endl;

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }   
    cout<<endl;

    cout<<"Using priority queue-:"<<endl;
    priority_queue<int>pq; // default max heap

    pq.push(4);
    pq.push(5);
    pq.push(12);
    pq.push(19);

    cout<<"Top element of pq "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top element of pq "<<pq.top()<<endl;
    cout<<"Size of pq "<<pq.size()<<endl;

    // Min heap
    priority_queue<int,vector<int>,greater<int>>minpq;

    minpq.push(4);
    minpq.push(5);
    minpq.push(12);
    minpq.push(19);

    cout<<"Top element of minpq "<<minpq.top()<<endl;
    minpq.pop();
    cout<<"Top element of minpq "<<minpq.top()<<endl;
    cout<<"Size of minpq "<<minpq.size()<<endl;

    return 0;
}