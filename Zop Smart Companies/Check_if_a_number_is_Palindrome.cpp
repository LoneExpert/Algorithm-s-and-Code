/*
 Q1 Given a positive integer n, find whether the number is Palindrome or not. 
 A number is a Palindrome if it remains the same when its digits are reversed.

 Input: n = 12321
 Output: true
 Explanation: 12321 is a Palindrome number because after reversing its digits, 
 the number becomes 12321 which is same as the original number.


 Input: n = 1234
 Output: false
 Explanation: 1234 is not a Palindrome number because after reversing its digits, 
 the number becomes 4321 which is different from the original number.
*/

#include<iostream>
using namespace std;

bool checkpalin(int n){
    int reverse = 0;
    
    int temp = n; // copy of the original number
    while(temp!=0){
        reverse = (reverse*10) + (temp%10); // first making one tens or whatever an second addding the last digit
        temp/=10; // removing the last digit from temp
    }

    return (reverse==n);


}
int main()
{
    int n;
    cin>>n;
    if(checkpalin(n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}