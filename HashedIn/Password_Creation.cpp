/*
Problem Statement: A password manager wants to create new passwords using two strings given by the user, then combined to create a harder-to- guess combination. Given two strings,interleave the characters of the strings to create a new string. Beginning with an empty string, alternately append a character from string a and from string b. If one of the strings is exhausted before the other, append the remaining letters from the other
string all at once. The result is the new password.

Example :
If a = ‘hackerrank’ and b = ‘mountain’,
The result is hmaocuknetrariannk.
Function Description :
Complete the function newPassword in the editor below.
Parameter(s):
Str : string a
Str : string b
Returns:
Str: new password using two strings
Sample input:
abc → a=”abc”
def → b=”def”
Sample output 0:
Adbecf
*/

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
    
//     string a,b;
//     cin>>a>>b;

//     string ans = "";
//     int i=0;
//     int j=0;

//     // merge the two string characters together
//     while(i<a.length() && j<b.length()) {
//         ans+=a[i++];
//         ans+=b[j++];
//     }

//     // append the remaining characters from the longer string
//     if(i<a.length()) {
//         ans+=a.substr(i);
//     }

//     if(j<b.length()) {
//         ans+=b.substr(j);
//     }

//     cout<<ans<<endl;


//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;

    string ans = "";
    int i=0,j=0;

    while(i<a.length() && j<b.length()){
        ans+=a[i++];
        ans+=b[j++];
    }

    // remaining
    while(i<a.length()){
        ans+=a[i++];
    }

    while(j<b.length()){
        ans+=b[j++];
    }

    cout<<ans<<endl;



    return 0;
}