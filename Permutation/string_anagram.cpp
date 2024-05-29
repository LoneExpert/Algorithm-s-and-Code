#include<iostream>
#include<unordered_map>
using namespace std;

bool ispermutation(string s,string a){
    if(s.length()!=a.length()){
        return false;
    }

    unordered_map<char,int>mp;

    for(char ch:s){
        mp[ch]++;
    }

    for(char c:a){
        if(mp.find(c)==mp.end() || mp[c]==0){
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin>>s;
    string a;
    cin>>a;

    if(ispermutation(s,a)){
        cout<<"The string are permutation of each other"<<endl;
    }
    else{
        cout<<"The string are not permutation of each other"<<endl;
    }
    return 0;
}