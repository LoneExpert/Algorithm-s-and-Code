#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int>&v,int i,int n){
    int parent = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<n && v[parent]<v[left]){
        parent = left;
    }
    if(right<n && v[parent]<v[right]){
        parent = right;
    }
    if(parent!=i){
        swap(v[parent],v[i]);
        heapify(v,parent,n);
    }
}

void convertmintomaxheap(vector<int>&v,int n){
    for(int i=(n-2)/2;i>=0;i--){
        heapify(v,i,n);
    }
}

void printheap(vector<int>&v,int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}

int main()
{
    vector<int>v{3, 5, 9, 6, 8, 20, 10, 12, 18, 9 };
    int n = v.size();
    cout<<"Min Heap are "<<endl;
    printheap(v,n);

    convertmintomaxheap(v,n);

    cout<<"Converted Max Heap"<<endl;
    printheap(v,n);
    

    return 0;
}