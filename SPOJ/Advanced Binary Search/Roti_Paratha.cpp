#include<iostream>
#include<vector>
using namespace std;

bool solve(vector<int>&chef,int r,int mid,int p){
	int time = 0; // to check that time from inditial value to mid value can we make p parathas
	int para = 0; // used to check can we made it or not

	for(int i=0;i<r;i++){ // traversing the vector to find all the ratings of the chef
		time = chef[i]; // taking the first chef at wor
		int counter = 2; // this is my r*1..r*2..r*3..so on
		while(time<=mid){
			para++;
			time+=(chef[i]*counter); // as shown in question the value is inc by r*1.r*2..r*3..so on
			counter++;
		}
		if(para>=p)return 1; // if my para i.e the paratha that chef cook is greater than or equal to 
		// the needed para the return 1
	}
	return 0;
}

int main()
{
	int t;
	cin>>t;

	while(t--){
		int p;
		cin>>p;

		int r;
		cin>>r;

		vector<int>chef(r);

		for(int i=0;i<r;i++){
			cin>>chef[i];
		}

		int lb = 0;
		int ub = 1e8;
		int ans = 0;

		while(lb<=ub){
			int mid = (lb+ub)/2;
			if(solve(chef,r,mid,p)){
				ans = mid;
				ub = mid-1;
			}
			else{
				lb = mid+1;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}