// Leetcode 
// Easy - 1800
//Given an array of positive integers nums, return the maximum possible sum of an ascending subarray in nums. A subarray is defined as a contiguous sequence of numbers in an array. A subarray [numsl, numsl+1, ..., numsr-1, numsr] is ascending if for all i where l <= i < r, numsi  < numsi+1. Note that a subarray of size 1 is ascending.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
    int sum = 0;
    int tsum = nums[0];
    if(n==1){
        return nums[0];
    }
    int prev = 0;
    for(int i=1; i<n; i++){
        if(nums[i]>nums[i-1]){
            tsum+=nums[i];
            prev = nums[i];
        }
        else if(nums[i]==nums[i-1]){
            sum = max(sum,tsum);
            tsum = nums[i];
        }
        else  if(nums[i]<nums[i-1]){
            sum = max(sum,tsum);
            tsum = nums[i];
        }
    }
    sum = max(sum,tsum);
    cout<<sum<<endl;
    return 0;
}