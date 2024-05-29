#include<iostream>
#include<vector>
using namespace std;

int partitioon(vector<int>& arr, int low,  int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]); //  putting left one to be on left and vice versa
    }
    swap(arr[low],arr[j]);
    return j; //  partition  index
 }

void quickSort(vector<int>& arr, int low,  int high){
    if(low<high){
        int Pindex = partitioon(arr,low,high);
        quickSort(arr,low,Pindex-1);
        quickSort(arr,Pindex+1,high);
    }
}

void printarr(vector<int>& arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int>arr{4,6,2,5,7,9,1,3};
    int n = arr.size();
    quickSort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}