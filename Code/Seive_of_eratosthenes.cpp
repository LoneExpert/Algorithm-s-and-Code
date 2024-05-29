#include <iostream>
#include <vector>
using namespace std;

// void check(vector<bool> &ans, int n)
// {
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (ans[i])
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 ans[j] = false;
//             }
//         }
//     }
// }

// int main()
// {
//     int cnt = 0;
//     int n = 2;
//     int range;
//     cin >> range;
//     vector<bool> ans(2, true);
//     while (cnt < range)
//     {
//         ans.push_back(true);
//         check(ans, n);
//         while (cnt < range && n < ans.size())
//         { 
//             if (ans[n])
//             {
//                 cout << n << " ";
//                 cnt++;
//             }
//             n++;
//         }
//     }

//     return 0;
// }


void check(vector<bool>&ans,int n){

    for(int i=2;i*i<=n;i++){
        if(ans[i]){
            for(int j=i*i;j<=n;j+=i){
                ans[j]=false;
            }
        }
    }
}

#include<iostream>
using namespace std;

int main()
{
    int cnt=0;
    int n=2;
    int range;
    cin>>range;
    vector<bool>ans(2,true);
    while(cnt<range){
        ans.push_back(true);
        check(ans,n);
        while(cnt<range && n<ans.size()){
            if(ans[n]){
                cout<<n<<" ";
                cnt++;
            }
            n++;
        }
    }


    return 0;
}