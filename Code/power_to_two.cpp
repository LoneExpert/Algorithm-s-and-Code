#include<iostream>
using namespace std;

int powtotwo(int power){
    if(power==0){
        return 1;
    }

    return 2*powtotwo(power-1);
}

int main()  
{
    int power;
    cin>>power;
    int result = powtotwo(power);
    cout<<"2^"<<power<<" = "<<result<<endl;
    return 0;
}