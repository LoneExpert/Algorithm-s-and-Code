#include <iostream>
#include <algorithm>
using namespace std;

bool ispossible(int arr[],int n,int mid, int c){
	int cowcnt = 1;
	int pos = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]-pos>=mid){
			cowcnt++;
			if(cowcnt==c){
				return true;
			}
			pos=arr[i];
		}
	}
	return false;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int c;
		cin>>c;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		// sort(arr.begin(),arr.end());
        sort(arr,arr+n);
		int s=0;
		int maxi = -1;
		for(int i=0;i<n;i++){
			maxi = max(maxi,arr[i]);
		}
		int e=maxi;
		int ans = -1;
		int mid=s+(e-s)/2;
		while(s<=e){
			if(ispossible(arr,n,mid,c)){
				ans=mid;
				s=mid+1;
			}
			else{
				e=mid-1;
			}
            mid=s+(e-s)/2;
		}
		cout<<ans<<endl;
		
	}
	
	return 0;
}