// Given a positive integer n, write a function to find if it is a power of 2 or not

// Examples: 

// Input : n = 4
// Output : Yes
// Explanation: 22 = 4


// Input : n = 42
// Output : No
// Explanation: 42 is not a power of 2


// Input : n = 1
// Output : Yes
// Explanation: 20 = 1

#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

bool check(int n){
    if(n<=0){
        return false;
    }

    return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    int n;
    cin>>n;

    if(check(n)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}