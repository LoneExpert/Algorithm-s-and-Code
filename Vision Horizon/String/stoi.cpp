// Leetcode
// Meduim - 8
// Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer.
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int i = 0;
    int sign = 1;
    long long ans = 0;
    while(i<n && s[i]==' '){
        i++;
    }

    if(i<n && s[i]=='-'){
        sign = -1;
        i++;
    }

    while(i<n && isdigit(s[i])){
        ans = ans*10+(s[i]-'0');

        if((ans*sign)<INT_MIN){
            return INT_MIN;
        }
        else if((ans*sign)>INT_MAX){
            return INT_MAX;
        }
        i++;
    }

    cout<<ans*sign<<endl;
    return 0;
}