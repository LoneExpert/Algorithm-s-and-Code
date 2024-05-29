#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> leftSmallestInArray(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1);
    stack<int> st; 

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        if (!st.empty()) {
            result[i] = st.top();
        }
        st.push(i);
    }

    return result;
}

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        vector<int>arr;
        int v;
        cin>>v;
        for(int i=0;i<v;i++){
            int input; 
            cin>>input;
            arr.push_back(input);
        }
        vector<int> result = leftSmallestInArray(arr);
        vector<int>ans;
        
        // for (int i = 0; i < arr.size(); ++i) {
        //     if (result[i] != -1) {
        //         cout << arr[result[i]]<<" ";
        //     } else {
        //         cout << -1<<" "; 
        //     }
        // }
        for (int i = 0; i < arr.size(); ++i) {
            if (result[i] != -1) {
                ans.push_back(arr[result[i]]);
            } else {
                ans.push_back(-1);
            }   
        }
        for(int i=0;i<v;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
