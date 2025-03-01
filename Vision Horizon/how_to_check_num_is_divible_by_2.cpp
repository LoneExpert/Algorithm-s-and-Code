#include<iostream>
using namespace std;

int main()
{   
    // we use bitwise AND operator here
    // to check if number is odd or even
    // if number is odd then n&1 will give 1
    // if number is even then n&1 will give 0
    // the reason is in odd number the last it is 1 and in even number the last it is 0
    int n;
    cin >> n;
    if(n&1){
        cout<< false;
    }
    else{
        cout<< true;
    }
    return 0;
}