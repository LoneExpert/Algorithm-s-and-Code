#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
using namespace std;

int ncr(int arr[],int n,vector<int>&c){
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto it=m.begin();it!=m.end();it++){
        if(it->second==1){
            c.push_back(it->first);
        }
    }
}

int main()
{
    int arr[6] = {1,2,3,2,1,4};
    vector<int>c;
    ncr(arr,6,c);
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    return 0;
}