#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[] = "Hi, I am Aryan Shubbu, and know C++";
    // Pointer
    char *ptr; 

    ptr = strtok(str," ,"); // static => stores the variable name..state of string in the previos func call
    // cout<<ptr<<endl;

    while(ptr!=NULL){
        cout<<ptr<<endl;
        ptr = strtok(NULL," ,"); // space and comma`    
    }

    // ptr = strtok(NULL," "); expext null instead of str otherwise it will print the same output
    // cout<<ptr<<endl; 



    return 0;
}