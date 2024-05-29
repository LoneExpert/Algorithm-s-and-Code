#include<iostream>
#include<climits>
using namespace std;

bool check(string &s,int i,int j){
    if(i>=j)return true;

    if(s[i]==s[j]){
        return check(s,i+1,j-1);
    }
    return false;
}


int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int maxlength = INT_MIN;
    int st = 0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(check(s,i,j)){
                if(j-i+1>maxlength){
                    maxlength = j-i+1;
                    st=i;
                }
            }
        }
    }

    cout<<s.substr(st,maxlength);

    return 0;
}