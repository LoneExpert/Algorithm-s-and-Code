// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(vector<int>&dp,int s){

//     if(s<=1)return s;

//     if(dp[s]!=-1)return dp[s];

//     // return solve(s-1)+solve(s-2); simple recurion
//     return dp[s] = solve(dp,s-1)+solve(dp,s-2);
// }

// int main()
// {
//     int m;
//     cin>>m;
//     vector<int>dp(m+1,-1);
//     cout<<solve(dp,m);

//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int solve(vector<int>&dp,int n){

//     dp[0] = 0;
//     dp[1] = 1;
    
//     for(int i=2;i<=n;i++){
//         dp[i] = dp[i-1]+dp[i-2];
//     }
//     return dp[n];
// }

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>dp(n);
//     cout<<solve(dp,n);

//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int prev1 = 1;
    int prev2 = 0;

    for(int i=2;i<=n;i++){
        int curr = prev1+prev2;
        prev2 = prev1;
        prev1=curr;
    }
    
    cout<<prev1;

    return 0;
}