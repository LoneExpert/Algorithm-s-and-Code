// Leetcode 
// Easy = 3105
// You are given an array of integers nums. Return the length of the longest subarray  of nums which is either strictly increasing or strictly decreasing

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int inc = 1;
    int dec = 1;
    int res = 1;
    
    for(int i=1;i<n;i++){
        if(nums[i]>nums[i-1]){
            inc++;
            dec=1;
        }
        else if(nums[i-1]>nums[i]){
            dec++;
            inc=1;
        }
        else{
            inc = 1;
            dec = 1;
        }
        res = max({res,inc,dec});
    }

    cout<<res<<endl;

    return 0;
}



