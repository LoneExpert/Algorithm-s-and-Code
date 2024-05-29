#include<iostream>
#include<vector>
using namespace std;

void find(vector<int>&ds,vector<int>&nums,vector<vector<int>>&ans,int freq[]){
    if(ds.size()==nums.size()){
        ans.push_back(ds);
        return;
    }

    for(int i=0;i<nums.size();i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i] = 1;
            find(ds,nums,ans,freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}


vector<vector<int>>solve(vector<int>&nums){
    vector<vector<int>>ans;
    vector<int>ds;
    int freq[nums.size()];

    for(int i=0;i<nums.size();i++){
        freq[i] = 0;
    }
    find(ds,nums,ans,freq);
    return ans;
}


int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    vector<vector<int>>ans = solve(vec);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}