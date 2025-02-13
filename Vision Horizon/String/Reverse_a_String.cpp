// // Not work for space between them
// #include<iostream>
// using namespace std;

// int main()
// {
//     string s;
//     cin>>s;
//     int n = s.length();
    
//     for(int i=0;i<n/2;i++){
//         // we are swapping the first half numbers to the second half of numbers which reduce the number of interration 
//         char temp = s[i];
//         s[i] = s[n-1-i];
//         s[n-1-i] = temp;
//     }   

//     cout<<s<<endl;  // printing the reversed string

//     return 0;
// }


#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s.length();
    for(int i=0;i<n/2;i++){
        char temp = s[n-i-1];
        s[n-i-1] = s[i];
        s[i] = temp;
    }
    cout<<s<<endl;

    return 0;
}