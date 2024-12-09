/*
 Q2 Given an Integer n, find the reverse of its digits.

 Input: n = 12345 
 Output: 54321
 Explanation: The output “54321” for the input num = 12345 represents the number reversed from 
 its original order.  


 Input: n = 876 
 Output: 678
 Explanation: The output “678” for the input num = 876 represents the number reversed from its 
 original order.
*/

#include<iostream>
using namespace std;

int reversenum(int n){
    int revnum = 0;
    while(n>0){
        revnum = (revnum*10) + (n%10);
        n/=10;
    }
    return revnum;
}

int main()
{
    int n;
    cin>>n;

    cout<<reversenum(n)<<endl;

    return 0;
}