#include<iostream>
using namespace std;

bool ispattern(string &text,string &pattern){
    int n = text.length();
    int m = pattern.length();

    for(int i=0;i<n-m;i++){
        int j=0;
        for(j=0;j<m;j++){
            if(text[i+j]!=pattern[j]){
                break;
            }
        }
        if(j==m){
            return true;
        }
    }
    return false;
}   

int main()
{
    string text;
    cin>>text;
    string pattern;
    cin>>pattern;
    if(ispattern(text,pattern)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}