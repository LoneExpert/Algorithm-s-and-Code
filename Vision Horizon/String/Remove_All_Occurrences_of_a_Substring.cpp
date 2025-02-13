// Leetcode
// Medium - 1910
// Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed: Find the leftmost occurrence of the substring part and remove it from s. Return s after removing all occurrences of part. A substring is a contiguous sequence of characters in a string.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string part;;
    cin>>part;

    while(s.find(part)!=string::npos){
        s.erase(s.find(part),part.length());
    }
    cout<<s<<endl;

    return 0;
}