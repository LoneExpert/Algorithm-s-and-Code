// Leetcode
// Easy - 3174
// bYou are given a string s. Your task is to remove all digits by doing this operation repeatedly: Delete the first digit and the closest non-digit character to its left. Return the resulting string after removing all digits.


// Method 1
// #include<iostream>
// using namespace std;

// int main()
// {
//     string s;
//     cin>>s;
    
//     string res = "";

//     for(char ch:s){
//         if(isdigit(ch)){
//             if(!res.empty()){
//                 res.pop_back();
//             }
//         }
//         else{
//             res+=ch;
//         }
//     }
//     cout<<res<<endl;

//     return 0;
// }

// Method 2
#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int k = 0;

    for(char c:s){
        if(isdigit(c)){
            if(k>0){ // using like a stack operation think k as a top of a stack
                s[k--];
            }
        }
        else{
            s[k++] = c; // moving forward and also storing the valid character
        }
    }

    cout<<s.substr(0,k)<<endl;

    return 0;
}
