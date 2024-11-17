/*
Problem Statement: You are given an array, You have to choose a contiguous subarray of length ‘k’, and find the minimum of that segment, return the maximum of those minimums.

Sample input :
1 → Length of segment x =1
5 → size of space n = 5
1 → space = [ 1,2,3,1,2]
2
3
1
2
Sample output :
3
Explanation :
The subarrays of size x = 1 are [1],[2],[3],[1], and [2],Because each subarray only contains 1 element, each value is minimal with respect to the subarray it is in. The maximum of these values is 3. Therefore, the answer is 3
*/



// #include<iostream>
// #include<vector>
// #include<deque>
// #include<climits>
// using namespace std;

// // Using Slinding Window Technique

// // Need more practice ************************************************



// int main()
// {
//     int x,n;
//     cin>>x>>n;

//     vector<int>arr(n);

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     deque<int>dq(n);
//     int maxVal = INT_MIN;
//     for(int i=0;i<n;i++){
//         // For rage
//         while(!dq.empty() && dq.front() < i-x+1){
//             dq.pop_front();
//         }
//         // remove greater element
//         while(!dq.empty() && arr[dq.back()] >= arr[i]){
//             dq.pop_back();
//         }
//         dq.push_back(i);

//         if(i>=x-1){
//             maxVal = max(maxVal,arr[dq.front()]);
//         }
//     }
//     cout<<maxVal<<endl;
//     return 0;
// }

#include<iostream>
#include<vector>
#include<deque>
#include<climits>
using namespace std;

int main()
{
    int x,n;
    cin>>x>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    deque<int>dq(n);
    int maxval = INT_MIN;

    for(int i=0;i<n;i++){
        // Range
        while(!dq.empty() && dq.front()<i-x+1){
            dq.pop_front();
        }
        // remove large numbers
        while(!dq.empty() && arr[dq.back()] > arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(i>x-1){
            maxval = max(maxval,arr[dq.front()]);
        }
    }

    cout<<maxval<<endl;


    return 0;
}