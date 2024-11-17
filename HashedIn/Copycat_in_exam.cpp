/*
Problem Statement: Rahul copies in the exam from his adjacent students. But he doesn’t want to be caught, so he changes words keeping the letter constant. That means he interchanges the positions of letters in words. You are the examiner and you have to find if he has copied a certain word from the one adjacent student who is giving the same exam, and give Rahul the markings he deserves.
Note that: Uppercase and lowercase are the same.

Input Format:
First line with the adjacent student’s word
Second line with Rahul’s word
Output Format:
0 if not copied
1 if copied
Constraints:
1<=Length of string<=10^6
Sample Input:
CAR
Acr
Sample Output:
1
*/

// #include<iostream>
// using namespace std;

// void lower(string &s){
//     for(int i=0;i<s.length();i++){
//         if(s[i]>='A' && s[i]<='Z'){
//             s[i] = s[i] - 'A' + 'a';
//         }
//     }
// }

// bool check(string a, string b){
//     lower(a);
//     lower(b);

//     if(a.length()!=b.length()){
//         return false;
//     }

//     int freq1[26] = {0};
//     int freq2[26] = {0};

//     for(int i=0;i<a.length();i++){
//         freq1[a[i]-'a']++;
//         freq2[b[i]-'a']++;
//     }

//     for(int i=0;i<26;i++){
//         if(freq1[i]!=freq2[i]){
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){
//         string a, b;
//         cin>>a>>b;

//         if(check(a,b)){
//             cout<<1<<endl;
//         }
//         else{
//             cout<<0<<endl;
//         }
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

void lower(string &s){
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] - 'A' + 'a';
        }
    }
}

bool checkper(string a, string b){
    lower(a);
    lower(b);

    if(a.length()!=b.length()){
        return false;
    }

    int freq1[26] = {0};
    int freq2[26] = {0};

    for(int i=0;i<a.length();i++){
        freq1[a[i]-'a']++;
        freq2[b[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;

        if(checkper(a,b)){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}