// Given a string s and integer k. We have to return the string having <= k characters of the string s from the beginning.
// Example: s="Codility We test coder" and k=14
// Output: "Codility We"

#include<iostream>
using namespace std;

string check(string s, int k){
    string result = "";
    int curlen = 0;

    for(char c:s){
        if(curlen+1>k){
            break;
        }
        result+=c;
        curlen++;

        if(c==' '){
            curlen++;
        }
    }

    if(!result.empty() && result.back()==' '){
        result.pop_back();
    }
    return result;
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();  // To handle the newline character after inputting the number of test cases.

    while(t--){
        string s;
        getline(cin,s);
        int k;
        cin>>k;
        cin.ignore();  // To handle the newline character after inputting the string and integer.

        string res = check(s,k);
        cout<<res<<endl;
    }
    return 0;
}