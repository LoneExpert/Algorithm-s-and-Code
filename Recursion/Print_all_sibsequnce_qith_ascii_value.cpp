#include<iostream>
using namespace std;

void solve(string s,string temp){
    //Base Case
    if(s.empty()){
        if(temp.empty()){
            cout<<"{}"<<" ";
        }
        else{
            cout<<temp<<" ";
        }
        cout<<endl;
        return;
    }

    char ch = s[0]; // take the first character
    int ascii = (int)ch; // taking ascii value
    string rem = s.substr(1); // taking the string by excluding the first character

    solve(rem,temp); // call solve with the rem and without first character
    solve(rem,temp+ch); // call solve with the rem and without first character
    solve(rem,temp+to_string(ascii)); //call solve with the rem and with ascii value


}

int main()
{
    string s;
    cin>>s;

    solve(s,"");
    return 0;
}

