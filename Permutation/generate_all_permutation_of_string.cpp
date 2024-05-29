#include<iostream>
using namespace std;

//n! permutation can be performed
void generate(string s,int start,int n){
    
    if(start==n-1){
        cout<<s<<endl;
        return;
    }

    for(int i=start;i<n;i++){
        swap(s[start],s[i]);
        generate(s,start+1,n);
        swap(s[start],s[i]);
    }
}

int main()
{
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        char a;
        cin>>a;
        s.push_back(a);
    }
    generate(s,0,n);

    return 0;
}