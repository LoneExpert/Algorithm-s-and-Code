#include<iostream>
#include<unordered_map>
using namespace std;

char nrc(string s){
    unordered_map<char,int>m;
    for(auto x:s)m[x]++;
    for(auto x:s)if(m[x]==1)return x;
    return '$';
}

int main()
{
    string s;
    cin>>s;
    cout<<nrc(s)<<endl;
    return 0;
}
