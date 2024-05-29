#include<iostream>
using namespace std;


long long int sqrt(int n){
        int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;
        long long int ans = 0;
        while(s<=e){
            long long int sq=mid*mid;
            if(sq==n){
                return mid;
            }
            if(sq<n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }

double precision(int n, int prec, int temp){
    double factor = 1;
    double ans = temp;
    for(int i=0;i<prec;i++){
        factor = factor/10;
        for(double j=ans;j*j<n;j+=factor){
            ans=j;
        }
    }
    return ans;
}


int main()
{
    int n;
    cin>>n;
    int temp = sqrt(n);
    cout<<"Answer is "<<precision(n,3,temp)<<endl;

    return 0;
}