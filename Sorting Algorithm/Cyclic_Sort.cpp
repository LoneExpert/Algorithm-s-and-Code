// To arrange the elememt to its correct location
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // vector<int>v{2,5,1,5,6,6};
    vector<int>v{4,4,2,1,3};
    int n = v.size();

    for(int i=0;i<n;i++){
        while (v[i]>0 && v[i]<=n && v[v[i]-1]!=v[i])       
        {
            swap(v[i],v[v[i]-1]);
        }
    }
    for(auto val:v){
        cout<<val<<" ";
    }
    return 0;
}