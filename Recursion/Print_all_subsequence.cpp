#include<iostream>
#include<vector>
using namespace std;

void solve(int ind,vector<int>&nums,vector<int>&temp){
    //Base Case
    if(ind==nums.size()){
        if(temp.empty()){
            cout<<"{}"<<" ";
        }
        else{
            for(auto it:temp){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    // take
    temp.push_back(nums[ind]);
    solve(ind+1,nums,temp);

    //not take
    temp.pop_back();
    solve(ind+1,nums,temp);
}

int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }


    vector<int>temp;

    solve(0,nums,temp);
    return 0;
}