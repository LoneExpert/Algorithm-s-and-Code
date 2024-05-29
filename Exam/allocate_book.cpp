#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// bool check(vector<int>&v,int n,int m,int  mid){
//     int stcnt = 1;
//     int pages = 0;

//     for(int i=0;i<n;i++){
//         if(pages+v[i]<=mid){
//             pages+=v[i];
//         }
//         else{
//             stcnt++;
//             if(stcnt>m || v[i]>mid){
//                 return false;
//             }
//             pages=v[i];
//         }
//     }
//     return true;
// }
bool check(vector<int>&v,int n,int m,int  mid){
    int stcnt = 1;
    int pages=0;

    for(int i=0;i<n;i++){
        if(pages+v[i]<=mid){
            pages+=v[i];
        }
        else{
            stcnt++;
            if(v[i]>mid || stcnt>m){
                return false;
            }
            pages = v[i];
        }
    }
    return true;
}

int main()
{
    vector<int>v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int m;
    cin>>m;

    if(m>n){
        cout<<"-1"<<endl;
        exit(0);
    }

    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    int e = sum;
    int ans = INT_MAX;
    
    while(s<=e){
        int mid = s+(e-s)/2;
        if(check(v,n,m,mid)){
            ans = min(ans,mid);
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    if(ans==INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<ans;
    }

    return 0;
}