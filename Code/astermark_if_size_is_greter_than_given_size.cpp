//count total cnt when number didnt found
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool solve(vector<int>temp,int find){



    for(int i=0;i<temp.size();i++){
        if(temp[i]==find){
            return true;
        }
    }

    return false;
}

int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int window;
    cin>>window;

    vector<int>temp(window);

    for(int i=0;i<window;i++){
        temp[i] = nums[i];
    }
    int cnt = 0;
    int st = window;
    for(int i=st;i<n;i++){
        if(temp.size()<window){
            if(!solve(temp,nums[i])){
                temp.push_back(nums[i]);
                
            }
        }
        else if(temp.size()==window){
            if(solve(temp,nums[i])){
                continue;
            }
            else{
                reverse(temp.begin(),temp.end());
                temp.pop_back();
                reverse(temp.begin(),temp.end());
                temp.push_back(nums[i]);
                cnt++;
            }   
        }
    }

    cout<<"* is "<<cnt<<endl;
    
    return 0;
}