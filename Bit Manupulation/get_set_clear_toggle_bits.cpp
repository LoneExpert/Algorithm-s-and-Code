#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // k is stating from 0; "so always do k-1" or do your own

    // get the ith bit 
    int x=70;
    int k=3; 
    int bits = ((x&(1<<k-1))!=0);
    // cout<<bits<<endl;


    // set the ith bit
    int y=70;
    int l=3;
    int bit = y|=1<<l-1;
    // cout<<bit<<endl; // will return the output after setting the bit


    // toggle the ith bit
    int z=12;
    int j=2;
    int biti = z^(1<<j-1);
    cout<<biti<<endl; // will return the output after toggle the bit


    // clear the ith bit     
    int u=70;   
    int h=3;
    int mask = ~(1<<h-1);
    int clear = (mask&u);
    // cout<<clear<<endl;// will return the output after toggle the bit
}