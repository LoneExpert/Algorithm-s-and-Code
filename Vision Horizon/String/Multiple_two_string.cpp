// Leetcode
// Medium - 43
// Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string. Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    // Implementing the multiplication logic here
    int n1 = s1.length();
    int n2 = s2.length();

    vector<int> res(n1+n2, 0);

    if(s1[0]=='0' || s2[0]=='0'){
        cout<<0<<endl;
        exit(0);
    }

    for(int i=n1-1;i>=0;i--){
        for(int j=n2-1;j>=0;j--){
            int mul = (s1[i]-'0') * (s2[j]-'0'); 
            int sum = mul+(res[i+j+1]); // 
            res[i+j+1] = sum%10; // putting unit digit
            res[i+j]+=sum/10; // adding carry of present
        }
    }

    string ans = "";
    for(int i=0;i<res.size();i++){
        if(!(ans.empty() && res[i]==0)){
            ans+=(to_string(res[i]));
        }
    }

    cout<<ans<<endl;
    
    return 0;
}