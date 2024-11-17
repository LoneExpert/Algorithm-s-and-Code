// Q- Given an array arr = [4, 5, 3, 7, 2, 11]. Print the array such that each index consists of the element which is next greater to it.
// Example - Output array = [5, 7, 7, 11, 11, 0] 

// Explanation - 

// 5 is the next greater element of 4.

// 7 is the next greater element of 5.

// 7 is the next greater element of 3.

// 11 is the next greater element of 7.

// 11 the next greater element of 2.

// Last is 0 because there is no next greater element to this.

// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int>arr(n);

//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }

//         stack<int>st;
//         vector<int>res(n,0);

//         for(int i=0;i<n;i++){
//             while(!st.empty() && arr[i]>arr[st.top()]){
//                 res[st.top()] = arr[i];
//                 st.pop();
//             }
//             st.push(i);
//         }

//         while(!st.empty()){
//             res[st.top()] = 0;
//             st.pop();
//         }

//         for(int i=0;i<n;i++){
//             cout<<res[i]<<" ";
//         }cout<<endl;
        
//     }
//     return 0;
// }



#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        vector<int>res(n,0);
        stack<int>st;

        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]<arr[i]){
                res[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }

        while(!st.empty()){
            res[st.top()] = 0;
            st.pop();
        }

        for(int i=0;i<n;i++){
            cout<<res[i]<<" ";
        }cout<<endl;

    }
    return 0;
}