/*
 Q6 If one string is present in original string



 Enter the first string (a): Hello World
 Enter the second string (b): World
 Yes, 'World' is present in 'Hello World'.
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string toLower(string &s){
    string lowstr = s;
    transform(lowstr.begin(),lowstr.end(),lowstr.begin(),::tolower);
    return lowstr;
}
bool substring(string a, string b){
    return toLower(a).find(toLower(b)) != string::npos;
}

int main()
{
    string a, b;
    cin>>a>>b;

    if(substring(a,b)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}