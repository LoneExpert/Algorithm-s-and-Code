#include<iostream>
#include<vector>

using namespace std;

void generate(vector<int>v,int start,int n){
    if(start==n-1){
        for(int i=0;i<n;i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }

    for(int i=start;i<n;i++){
        swap(v[start],v[i]);
        generate(v,start+1,n);
        swap(v[start],v[i]);    
    }
    
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    generate(v,0,n);
    return 0;
}