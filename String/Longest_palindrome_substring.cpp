// Method 1 Brute Force 
// #include<iostream>
// using namespace std;

// bool ispalin(string s){
//     int l = 0;
//     int r = s.length()-1;

//     while(l<r){
//         if(s[l]!=s[r]){
//             return false;
//         }
//         l++;
//         r--;
//     }
//     return true;
// }

// int main()
// {
//     string s;            
//     cin>>s;

//     int maxlength = 1;

//     string maxstr = s.substr(0,1); // from st to end find all palindrome

//     for(int i=0;i<s.length();i++){
//         for(int j=i;j<s.length();j++){
//             if(j-i+1>maxlength && ispalin(s.substr(i,j-i+1))){
//                 maxlength = j-i+1;
//                 maxstr = s.substr(i,j-i+1); // j-i is the max size and i is the starting point
//             }
//         }
//     }

//     cout<<maxlength<<endl;
    
//     return 0;
// }



// Method 2 DP with memoisation
// TC O(n^2)
// SC O(N^2)

// #include<iostream>
// #include<cstring>
// using namespace std;

// int dp[1001][1001];
// bool solve(string &s,int i,int j){
//     if(i>=j)
//         return 1;

//     if(dp[i][j]!=-1)return dp[i][j];

//     if(s[i]==s[j]){
//         return dp[i][j] = solve(s,i+1,j-1);
//     }
    
//     return dp[i][j] = false;
// }

// int main()
// {
//     string s;
//     cin>>s;

//     int maxlength = 1;
//     int si = 0;
//     memset(dp,-1,sizeof(dp)); //declare the data staructure,the value,how much block you need

//     for(int i=0;i<s.length();i++){
//         for(int j=i;j<s.length();j++){
//             if(solve(s,i,j)){
//                 if(j-i+1>maxlength){
//                     si=i;
//                     maxlength = j-i+1;
//                 }
//             }
//         }
//     }

//     cout<<maxlength<<endl;
//     cout<<s.substr(si,maxlength);

//     return 0;
// }


// Method 3 Using Tabulation

// #include<iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     string s;
//     cin>>s;

//     int n = s.length();
//     vector<vector<bool>>dp(n,vector<bool>(n,false));
//     int maxlength = 1;
//     int si = 0;
//     int ei = 0;

//     for(int i=0;i<n;i++){
//         dp[i][i] = true;
//         for(int j=0;j<i;j++){
//             if(s[j]==s[i] && (i-j<=2 && dp[j+1][i-1])){
//                 maxlength = i-j+1;
//                 si = j;
//                 ei = i; 
//             }
//         }
//     }

//     cout<<s.substr(si,ei-si+1);
    

//     return 0;
// }



// Method 4 
// TC O(n^2)
// SC O(1)
// #include<iostream>
// using namespace std;

// int main()
// {
//     string s;
//     cin>>s;
    
//     int n = s.length();
//     string maxstr = s.substr(0,1);

//     auto expand = [&](int left,int right){
//         if(left>0 && right<n && s[left]==s[right]){
//             left--;
//             right++;
//         }
//         return s.substr(left+1,right-left-1);
//     };

//     for(int i=0;i<n-1;i++){
//         string odd = expand(i,i);
//         string even = expand(i,i+1);

//         if(odd.length()>maxstr.length()){
//             maxstr = odd;
//         }
//         else if(even.length()>maxstr.length()){
//             maxstr = even;
//         }
//     }

//     cout<<maxstr<<endl;

//     return 0;
// }


