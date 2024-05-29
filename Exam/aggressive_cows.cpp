#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// bool ispossible(vector<int> &stalls, int k, int mid)
// {
//     int cowcnt = 1;
//     int pos = stalls[0];
//     for (int i = 0; i < stalls.size(); i++)
//     {
//         if (stalls[i] - pos >= mid)
//         {
//             cowcnt++;
//             if (cowcnt == k)
//             {
//                 return true;
//             }
//             pos = stalls[i];
//         }
//     }
//     return false;
// }

// int aggressiveCows(vector<int>&stalls,int k){
//     sort(stalls.begin(),stalls.end());
//     int s=0;
//     int ans = -1;
//     int maxi = stalls[stalls.size()-1];
//     int e=maxi;
//     while(s<=e){
//         int mid = s+(e-s)/2;
//         if(ispossible(stalls,k,mid)){
//             ans = mid;
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return ans;
// }





bool ispossible(vector<int>&stalls,int k,int mid){
    int cowcnt = 1;
    int pos = stalls[0];
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-pos>=mid){
            cowcnt++;
            if(cowcnt==k){
                return true;
            }
            pos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int>&stalls,int k){
    sort(stalls.begin(),stalls.end());
    int s=0;
    int ans = -1;
    int maxi = stalls[stalls.size()-1];
    int e=maxi;
    while(s<=e){
        int mid = s+(e-s)/2;

        if(ispossible(stalls,k,mid)){
            ans = mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}


int main()
{
    vector<int> stalls = {1, 2, 8, 4, 9};
    int k = 3;

    int result = aggressiveCows(stalls, k);
    cout << "Maximum possible minimum distance: " << result << endl;

    return 0;
}
