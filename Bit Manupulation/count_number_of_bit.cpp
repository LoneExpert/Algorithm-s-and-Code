#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<__builtin_popcount(n)<<endl; 
    // only works with cout not work with return because it is builtin function
    return 0;
}