// Q- Given an array named prices, you want to determine the profit you can make by purchasing a stock on a single day and then selling it on a different day.
// Example -

// Input: prices = [4,7,1,8,2,9]

// Output: 9

// Explanation: Buy stocks on day 3 (price = 1) and sell on day 6 (price = 9), profit = 9-1 = 9=8.

// Single Day 
// Multiple Transactions are not allowed

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while (t--){
//         int n;
//         cin>>n;
//         vector<int>prices(n);

//         for(int i=0;i<n;i++){
//             cin>>prices[i];
//         }

//         long long minprice = INT_MAX;
//         long long maxprofit = 0;

//         for(int i=0;i<n;i++){
//             minprice = min(minprice, prices[i]);
//             maxprofit = max(maxprofit, prices[i]-minprice);
//         }

//         cout<<maxprofit<<endl;

//     }
//     return 0;
// }


#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int minval = INT_MAX;
        int maxprofit = 0;

        for(int i=0;i<n;i++){
            minval = min(minval,arr[i]);
            maxprofit = max(maxprofit,arr[i]-minval);
        }
        
        cout<<maxprofit<<endl;
    }
    return 0;
}