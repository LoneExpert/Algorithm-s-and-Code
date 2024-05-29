#include<iostream>
#include<vector>
using namespace std;

int solve(int ind,int s,vector<int>&ip,int sum,int n){
    // For all subsequences
    // For this solve should be void
    // if(ind==n){
    //     if(sum==s){
    //         for(auto it:temp){
    //             cout<<it<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     return ;
    // }

    //For only one
    // For this solve should be bool
    // if(ind==n){
    //     if(sum==s){
    //         for(auto it:temp){
    //             cout<<it<<" ";
    //         }
    //         cout<<endl;
    //         return true;
    //     }
    //     else return false;
    // }

    // temp.push_back(ip[ind]);
    // s+=ip[ind];
    // if(solve(ind+1,s,ip,temp,sum,n)==true)return true;
    // s-=ip[ind];
    // temp.pop_back();

    // if(solve(ind+1,s,ip,temp,sum,n)==true)return true;

    // return false;

    // Count no of subsequence with sum k
    //For this solve should be int
    if(ind==n){
        if(sum==s){
            return 1;
        }
        else return 0;
    }

    s+=ip[ind];
    int l = solve(ind+1,s,ip,sum,n);
    s-=ip[ind];

    int r = solve(ind+1,s,ip,sum,n);

    return l+r;
}

int main()
{
    int n;
    cin>>n;
    vector<int>ip(n);
    for(int i=0;i<n;i++){
        cin>>ip[i];
    }
    int s;
    cin>>s;
    // vector<int>temp;
    // solve(0,0,ip,temp,s,n);
    cout<<solve(0,0,ip,s,n)<<endl;

    return 0;
}