// Leetcode
// Medium - 151
// Given an input string s, reverse the order of the words. A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space. Return a string of the words in reverse order concatenated by a single space. Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    // Some test cases
    // string s = "the sky is blue";
    string s = "hello world  ";
    // string s = "a good    example";
    // in user input as " " comes it not save it as it count the ending of the string
    
    int n  = s.length();
    string ans = "";
    string temp = "";

    for(int i=n-1;i>=0; i--){
        if(s[i]==' ' && temp!=""){
            reverse(temp.begin(), temp.end());
            ans+=temp+' ';
            temp="";
        }
        else{
            if(s[i]==' ')continue;
            temp+=s[i];
        }
        
    }
    reverse(temp.begin(),temp.end());
    ans+=temp;
    if(ans[ans.size()-1]==' '){ans.pop_back();}

    cout<<ans<<endl;
    

    return 0;
}