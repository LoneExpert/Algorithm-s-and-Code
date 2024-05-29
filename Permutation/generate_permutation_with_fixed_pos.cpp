#include<iostream>
#include<vector>
using namespace std;

void generate(vector<int>&vc,int ele,int n){

    if(ele==n-1){
        for(int num:vc){
            cout<<num<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=ele;i<n;i++){
        swap(vc[ele],vc[i]);
        generate(vc,ele+1,n);
        swap(vc[ele],vc[i]);
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int>vc(n);

    for(int i=0;i<n;i++){
        cin>>vc[i];
    }
    int ele;
    cout<<"pos fixed"<<endl;
    cin>>ele;
    generate(vc,ele,n);
    return 0;
}