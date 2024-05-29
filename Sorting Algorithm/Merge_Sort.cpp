#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;

    while(low<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            low++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}



void mergeSort(vector<int>&arr,int low,int high){
    if(low==high){
        return;
    }

    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);

}

void printarr(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    // vector<int>arr{3,1,2,4,1,5,2,6,4};
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    // int n = arr.size();
    mergeSort(arr,0,n-1);
    printarr(arr,n);

    return 0;
}
