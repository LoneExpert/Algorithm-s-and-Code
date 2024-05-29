#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int pos = 1;
    while(n>0){
        if(n^0){
            cout<<pos<<endl;
            exit(1);
        }
        n>>=1;
        pos++;
    }
    cout<<0<<endl;
    return 0;
}