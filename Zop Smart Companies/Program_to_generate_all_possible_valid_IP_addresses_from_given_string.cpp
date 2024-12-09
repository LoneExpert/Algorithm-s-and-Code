/*
 Q3 Given a string containing only digits, restore it by returning all possible valid IP address combinations.
 A valid IP address must be in the form of A.B.C.D, where A, B, C, and D are numbers from 0-255. 
 The numbers cannot be 0 prefixed unless they are 0.

 Input: 25525511135
 Output: [“255.255.11.135”, “255.255.111.35”]
 Explanation:
 These are the only valid possible
 IP addresses.

 Input: "25505011535"
 Output: []
 Explanation: 
 We cannot generate a valid IP
 address with this string.

 First, we will place 3 dots in the given string and then try out all the possible combinations for the 
 3 dots. 
 Corner case for validity:

 For string "25011255255"
 25.011.255.255 is not valid as 011 is not valid.
 25.11.255.255 is not valid either as you are not
 allowed to change the string.
 250.11.255.255 is valid.

 Approach: Split the string with ‘ . ‘ and then check for all corner cases. 
 Before entering the loop, check the size of the string. Generate all the possible combinations using 
 looping through the string. If IP is found to be valid then return the IP address, 
 else simply return the empty list.
 Below is the implementation of the above approach:
*/

#include<iostream>
#include<vector>
using namespace std;

void solve(string s,int i, int j, int level, string temp,vector<string>&ans){

    // base case
    if(i==(j+1) && level==5){
        ans.push_back(temp.substr(1));
    }

    // Digits of a number ranging 0-255 can lie only between
    // 0-3

    for(int k=i;k<i+3 && k<=j;k++){
        string ad = s.substr(i,k-i+1);
        
        // Return if string starting with '0' or it is
        // greater than 255.
        if((s[i]=='0' && ad.size()>1) || stol(ad)>255){
            return;
        }

        // Recursively call for another level.
        solve(s,k+1,j,level+1,temp+'.'+ad,ans);
    }

}

int main()
{
    string s;
    cin>>s;
    int n = s.length();
    vector<string>ans;

    solve(s,0,n-1,1,"",ans);

    for(string it:ans){
        cout<<it<<endl;
    }

    return 0;
}