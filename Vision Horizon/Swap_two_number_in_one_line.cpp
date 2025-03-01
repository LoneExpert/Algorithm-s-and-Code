#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    a = a+b-(b=a);
    cout<<a<<" "<<b<<endl;
    return 0;
}