#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class ans{
    public:
        // unordered_map<int,int>mp;
        vector<bool>vis;
        int cntf = 0;
        int cntb = 0;
    
    int solve(int n,int m,vector<int>front_end,vector<int>Back_end,int needf,int needb){
        sort(front_end.begin(),front_end.end());
        sort(Back_end.begin(),Back_end.end());

        for(int i=0;i<n;i++){
            vis[i] = true;
            cntf+=front_end[i];
        }
    }

};

int main()
{
    // In this question the manager has to choose front-end developer from front-end vector and same for 
    // back-end vector. But there is a catch that no two same front-end and backend-end developer can't work
    // together 
    // I have to choose in such way that the cost should be less
    int n;
    cout<<"Size of Front-end vector "<<endl;
    cin>>n;

    int m;
    cout<<"Size of Back-end vector "<<endl;
    cin>>m;

    vector<int>front_end;
    vector<int>Back_end;
    
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        front_end.push_back(a);
    }


    for(int i=0;i<m;i++){
        int b;
        cin>>b;
        Back_end.push_back(b);
    }
    
    int needf;
    cout<<"Need for Front-end developer "<<endl;
    cin>>needf;

    int needb;
    cout<<"Need for Back-end developer "<<endl;
    cin>>needb;

    ans obj;
    obj.solve(n,m,front_end,Back_end,needf,needb);

    return 0;
}