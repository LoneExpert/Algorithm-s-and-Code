// Leetcode
// Medium - 5
// Given a string s, return the longest palindromic substring  in s.

#include<iostream>
#include<climits>
using namespace std;

bool check(string &s, int i, int j){
    if(i>=j){
        return true;
    }
    if(s[i]==s[j]){
        return check(s,i+1,j-1);
    }
    return false;
}
int main()
{
    string s;
    cin>>s;

    int st = 0;
    int maxlength = INT_MIN;

    for(int i=0;i<s.length();i++){
        for(int j=i;j<s.length();j++){
            if(check(s,i,j)){
                if((j-i+1)>maxlength){
                    maxlength = j-i+1;
                    st=i;
                }
            }
        }
    }

    cout<<s.substr(st,maxlength)<<endl;

    return 0;
}