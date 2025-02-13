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