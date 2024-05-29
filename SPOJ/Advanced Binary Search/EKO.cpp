#include<iostream>
using namespace std;

#define ll long long


bool ispossible(ll arr[],ll n,ll mid,ll m){
    ll woodcnt = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>=mid){
            woodcnt+=(arr[i]-mid);
        }
    }
    return woodcnt>=m;
}

int main()
{
    ll n;
    ll m;
    cin>>n;
    cin>>m;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    ll s=0;
    ll e=1e9;
    while(s<=e){
        ll mid = s+(e-s)/2;
        if(ispossible(arr,n,mid,m)){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }

    if(ispossible(arr,n,e,m)){
        cout<<e<<endl;
    }
    else{
        cout<<s-1<<endl;
    }


    return 0;
}