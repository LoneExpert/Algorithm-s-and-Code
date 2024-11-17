/*
Anirudh is attending an astronomy lecture. His professor who is very strict asks students to
Write a program to print the trapezium pattern using stars and dots as shown below . Since Anirudh is not good at astronomy can you help him?

Sample Input:
N = 3
Output:
**.**
*…*
…..
*…*
**.**
*/

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     // first part of the pattern
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n-i-1;j++){ 
//             cout<<"*";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<".";
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     // Second part of the pattern excluding the middle part
//     for(int i=n-2;i>=0;i--){
//         for(int j=0;j<n-i-1;j++){
//             cout<<"*";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<".";
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    // first part
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<".";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // second part ecluding middle part

    for(int i=n-2;i>=0;i--){
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<".";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}