#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt2(0),cnt3(0),cnt5(0);
    vector<int>dp(n);
    // dp[0]=1;
    for(int i=0;i<n;i++){
        dp[i]=min({2*dp[cnt2],3*dp[cnt3],5*dp[cnt5]});
        if(2*dp[cnt2]==dp[i])
            cnt2++;
        if(3*dp[cnt3]==dp[i])
            cnt3++;
        if(5*dp[cnt5]==dp[i])
            cnt5++;
    }
    // cout<<dp[n-1]<<endl;
    for(int i=0;i<n;i++){
        cout<<dp[i]<<" ";
    }cout<<endl;
    
    return 0;
}