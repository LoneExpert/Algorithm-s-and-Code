// LeetCode
// Easy - 13
// Given a roman numeral, convert it to an integer.

#include<iostream>
#include<map>
using namespace std;

int main()
{
    string s;
    cin>>s;

    map<char,int>mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int sum = 0;
    int n = s.length();

    for(int i=0;i<n;i++){
        int curr = mp[s[i]];
        int next = (i+1<n ? mp[s[i+1]]:0);

        if(next>curr){
            sum+=(next-curr);
            i++;// for next iteration skipping the second number
        }
        else{
            sum+=curr;
        }
    }

    cout<<sum<<endl;

    return 0;
}