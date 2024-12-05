// Given Two Arrays, return the number of occurrences of the fraction that appears most.

// Example: a={1,2,3,4} , b={2,3,6,8} 
// Output =>  3 as (1/2=3/6=4/8}


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int gcd(int x, int y){
    return y==0?x:gcd(y,x%y);
}

int maxfreq(vector<int>&a,vector<int>&b,int n){
    unordered_map<string,int>mp;
    int maxfrequency = 0;

    for(int i=0;i<n;i++){
        int num = a[i];
        int den = b[i];

        if(den == 0){
            continue;
        }

        int commondiv = gcd(num,den);

        num/=commondiv;
        den/=commondiv;

        if(den<0){
            num=-num;
            den=-den;
        }

        string key = to_string(num) + "/" + to_string(den);
        mp[key]++;
        maxfrequency = max(maxfrequency,mp[key]);
    }
    return maxfrequency;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        int result = maxfreq(a,b,n);
        cout<<result<<endl;
    }
    return 0;
}