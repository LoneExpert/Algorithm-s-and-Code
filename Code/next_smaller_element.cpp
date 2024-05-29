#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main()
{
    vector<int>v{4,1,6,1};
    stack<int>s;
    int n = v.size();
    s.push(-1);
    vector<int>ans(n);
    
    for(int i=n-1;i>=0;i--){
        int curr = v[i];
        while(s.top()>=curr){
            // s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    for(int i=0;i<n;i++){
        cout<<ans.at(i)<<endl;
    }   
    return 0;
}

// O(n) time complexity