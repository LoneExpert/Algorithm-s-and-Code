#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    n--;
    string res="";
    res+='a' + (n%4);
    res+='a' + (n%16)/4;
    res+='a' + (n%64)/16;
    res+='a' + (n%256)/64;
    reverse(res.begin(),res.end());
    cout<<res<<endl;
    return 0;
}


