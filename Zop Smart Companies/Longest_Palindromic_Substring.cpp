/*
 Q4 Given a string str, the task is to find the longest substring which is a palindrome. 
 If there are multiple answers, then return the first appearing substring.
 Input: str = “forgeeksskeegfor” 
 Output: “geeksskeeg”
 Explanation: There are several possible palindromic substrings like “kssk”, “ss”, “eeksskee” etc. 
 But the substring “geeksskeeg” is the longest among all.


 Input: str = “Geeks” 
 Output: “ee”


 Input: str = “abc” 
 Output: “a”

 Input: str = “” 
 Output: “”
*/

#include<iostream>
using namespace std;

string longestpalin(string &str){
    int n = str.length();
    if(n==0)return "";

    int start = 0;
    int maxlen = 1;


    for(int i=0;i<n;i++){

        // THIS RUNS TWO TIMES for both odd and even length palindromes. j = 0 means odd 
        // and j = 1 means odd length

        for(int j=0;j<=1;j++){
            int low = i;
            int high = i+j;

            // Expand substring while it is a palindrome and in bounds
            while(low>=0 && high<n && str[low]==str[high]){
                int currlen = high-low+1;
                if(currlen>maxlen){
                    start = low;
                    maxlen = currlen;
                }
                low--;
                high++;
            }
        }
    }

    return str.substr(start, maxlen);  // Return the longest palindrome substring
}

int main()
{
    string s;
    cin>>s;
    cout<<longestpalin(s)<<endl;
    return 0;
}