#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr;
    int n;
    cin>>n;
    int a;
    cin>>a;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }
    vector<int>res(n);
    for(int i=0;i<n;i++){
        res[(i+a)%n] = arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }


    return 0;
}