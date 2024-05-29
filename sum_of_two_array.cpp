#include<iostream>
#include<vector>
using namespace std;

bool arrsort(vector<int>v){
	int n=v.size();
	for(int i=0;i<n;i++){
		if(v[i]>v[i+1]){
			return false;
		}
	}
	return true;
}
int main()
{
	vector<int>v{1,5,5,100};
	int n=v.size();
	if(arrsort(v)){
		cout<<"sort"<<endl;
	}
	else{
		cout<<"Not sorted"<<endl;
	}

	return 0;
}