#include<iostream>
using namespace std;

int findncr(int n, int r){
    int res = 1;
    for(int i=0;i<r;i++){
        res = res*(n-i); // 10 9 8 
        res = res/(i+1); // 10/1 9/2 8/3
    }
    return res;
}

int main()
{
    int n;
    cout<<"Enter N ";
    cin>>n;
    int r;
    // cout<<endl;
    cout<<"Enter R ";
    cin>>r;
    int result = findncr(n,r);
    cout<<"nCr is "<<result<<endl;

    return 0;
}