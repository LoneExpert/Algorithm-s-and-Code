#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int evenbit=0;
    int oddbit=0;
    int i=0;
    for(;i<s.length();i++){
        if(s[i]=='1'){
            if(i%2==0){
                evenbit++;
            }
            else{
                oddbit++;
            }
        }
    }
    if(abs(evenbit-oddbit)%3==0){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}