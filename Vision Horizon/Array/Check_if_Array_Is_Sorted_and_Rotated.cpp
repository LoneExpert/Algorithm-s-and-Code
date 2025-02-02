// Leetcode 
// Easy - 1752
// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // In this we know that one rotation is allowed if more than one rotation is allowed then cnt can be more than 1
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int cnt = 0;

    for(int i=1;i<n;i++){
        if(nums[i-1]>nums[i]){
            cnt++;
        }
    }
    if(nums[n-1]>nums[0]){
        cnt++;
    }

    if(cnt<=1){
        cout<<true<<endl;
    }
    else{
        cout<<false<<endl;
    }

    return 0;
}