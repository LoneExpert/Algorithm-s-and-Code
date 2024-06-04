#include<iostream>
#include<queue>
using namespace std;

int main()
{
    string s;
    cin>>s;

    priority_queue<char,vector<char>,greater<char>>pq;

    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
            // pq.push(s[i]);
            // cout<<s[i]<<endl;
            continue;
        }
        
        pq.push(s[i]);
        if(pq.size()>3){
            pq.pop();
        }
    }
    
    cout<<pq.top();

    return 0;
}
