// Leetcode
// Easy - 1790
// You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices. Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return false.

#include<iostream>
#include<map>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    map<char,int> mp1;
    map<char,int> mp2;

    for(int i=0;i<s1.length();i++){
        mp1[s1[i]]++;
    }

    for(int i=0;i<s2.length();i++){
        mp2[s2[i]]++;
    }

    if(mp1!=mp2){
        cout<<false<<endl;
        exit(0);
    }
    else{
        int cnt = 0;
        for(int i=0,j=0;i<s1.length(),j<s2.length();i++,j++){
            if(s1[i]!=s2[j]){
                cnt++;
            }
        }
        if(cnt==0 || cnt==2){
            cout<<true<<endl;
            
        }
        else{
            cout<<false<<endl;
        }
    }

    
    return 0;
}