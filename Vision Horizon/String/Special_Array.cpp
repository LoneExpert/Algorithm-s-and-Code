// Leetcode
// Easy - 3151
// An array is considered special if every pair of its adjacent elements contains two numbers with different parity.

// You are given an array of integers nums. Return true if nums is a special array, otherwise, return false.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array ";  
    cin>>n;   

    vector<int>nums(n);

    for(int i=0; i<nums.size(); i++){
        cin>>nums[i];
    }

    bool flag = false;

    if(n<=1){
        flag = true;
    }
    for(int i=0;i<nums.size();i++){
        int a = nums[i];
        if(i==0){
            if((a%2)==0){
                int b = nums[i+1];
                if((b%2)==0){
                    flag = false;
                    break;
                }
            }
            else{
                int b = nums[i+1];
                if((b%2)!=0){
                    flag = false;
                    break;
                }
            }
        }
        else if((i>=1)){
            if(n==2){
                if((a%2)==0){
                    int b = nums[i-1];
                    if((b%2)==0){
                        flag = false;
                        break;
                    }
                }
                else{
                    int b = nums[i-1];
                    if((b%2)!=0){
                        flag = false;
                        break;
                    }
                }
            }
            else{
                if((a%2)==0){
                    if(i==n-1){
                        // EVEN
                        int b1 = nums[i-1];
                        if(((b1%2)==0)){
                            flag = false;
                            break;
                        }
                    }
                    else{
                        // EVEN
                        int b1 = nums[i-1];
                        int b2 = nums[i+1];
                            
                        if(((b1%2)==0) || ((b2%2)==0)){
                            flag = false;
                            break;
                        }
                    }
                }
                else{
                    if(i==n-1){
                        // ODD
                        int b1 = nums[i-1];
                        if(((b1%2)!=0)){
                            flag = false;
                            break;
                        }
                    }
                    else{
                        //  ODD
                        int b1 = nums[i-1];
                        int b2 = nums[i+1];
                        if(((b1%2)!=0) || ((b2%2)!=0)){
                            flag = false;
                            break;
                        }
                    }
                }
            }
        }   
    }

    cout<<flag<<endl;
    


    return 0;
}