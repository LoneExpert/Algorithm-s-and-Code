#include <iostream>
using namespace std;

//

bool checkprime(int num){
    if(num<=1){
        return 1;
    }
    for(int j=2;j<=num/2;j++){
        if(num%j == 0){
            return 0;
        }
        return 1;
    }
}

int main() {

    int n;
	cin>>n;
	int cnt=0;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
    int isprime = 0;
	for(int i=0;i<n;i++){
	    isprime = checkprime(arr[i]);
        if(isprime == 1){
            cnt++;  
        }
    }
    cout<<cnt;
}



