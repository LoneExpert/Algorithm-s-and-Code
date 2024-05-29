#include<iostream>
using namespace std;

int countbit(int num){
    int count = 0;
    while(num){
        // count+=num&1;
        if(num&1){
            count++;
        }
        num>>=1;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    int totalbit=0;
    for(int i=1;i<=n;i++){
        totalbit+=countbit(i);
    }   
    cout<<totalbit<<endl;
    return 0;
}

