#include<iostream>
using namespace std;

void solve(int ind,string &s,string temp){
    //Base Case
    if(ind==s.length()){
        if(temp.length()==0){
            cout<<"{}"<<" ";
        }
        else{
            cout<<temp<<" ";
        }
        cout<<endl;
        return;
    }

    //Take
    temp.push_back(s[ind]);
    solve(ind+1,s,temp);

    //Not Take
    temp.pop_back();
    solve(ind+1,s,temp);
}

int main()
{
    string s;
    cin>>s;

    string temp;
    solve(0,s,temp);
    return 0;
}