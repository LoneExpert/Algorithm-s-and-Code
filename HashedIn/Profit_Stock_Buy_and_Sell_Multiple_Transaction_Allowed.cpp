//  Q- Given an array prices[] of size n denoting the cost of stock on each day, the task is to find the maximum total profit if we can buy and sell the stocks any number of times.

// Note: We can only sell a stock which we have bought earlier and we cannot hold multiple stocks on any day.

// Examples:

// Input: prices[] = {100, 180, 260, 310, 40, 535, 695}
// Output: 865
// Explanation: Buy the stock on day 0 and sell it on day 3 => 310 – 100 = 210
//                        Buy the stock on day 4 and sell it on day 6 => 695 – 40 = 655
//                        Maximum Profit  = 210 + 655 = 865
// Input: prices[] = {4, 2, 2, 2, 4}
// Output: 2
// Explanation: Buy the stock on day 3 and sell it on day 4 => 4 – 2 = 2
//                        Maximum Profit  = 2

// Multiple Transactions allowed

#include<iostream>
#include<vector>
using namespace std;

long long Maximum(vector<int> &arr, int n){
    long long tp = 0;

    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            tp+=arr[i]-arr[i-1];
        }
    }
    return tp;
}

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
        cout<<Maximum(arr,n)<<endl;
    }
    return 0;
}

