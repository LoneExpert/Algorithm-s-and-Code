#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);

    int tls = 0;

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    for(int i=0;i<n;i++){
        tls+=nums[i];
    }

    int rang = -1;

    int sum = 0;

    for(int i=0;i<n;i++){
        tls-=nums[i];
        sum+=nums[i];
        if(sum==tls){
            rang = i;
            break;
        }
    }

    int m = rang+1;
    int size = n-rang-1;
    vector<int>vec1(m);s
    vector<int>vec2(size);


    for(int i=0;i<m;i++){
        vec1[i] = nums[i];
    }

    for(int i=0;i<size;i++){
        vec2[i] = nums[m+i]; // explain-> m is 2 for vec1 so, for the remaining i will add m+i that is 2+0.2+1.2+2.. so on
    }
    
    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }cout<<endl;

    for(int i=0;i<vec2.size();i++){
        cout<<vec2[i]<<" ";
    }cout<<endl;
    
    return 0;
}