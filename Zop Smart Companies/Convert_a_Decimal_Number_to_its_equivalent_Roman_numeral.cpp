/*
 Q5 Convert a Decimal Number to its equivalent Roman numeral
 
 To convert a decimal number to its equivalent Roman numeral in C++, you can use a set of 
 predefined Roman numeral symbols and their corresponding decimal values. 
 The Roman numerals are made up of letters such as I, V, X, L, C, D, and M. 
 These symbols represent specific values, and you can convert a decimal number to Roman numeral 
 format by repeatedly subtracting the highest possible Roman numeral value.

 Enter a decimal number: 1994
 Output 1:
 Roman numeral: MCMXCIV

 Enter a decimal number: 58
 Output 2:
 Roman numeral: LVIII
*/

#include<iostream>
#include<vector>
using namespace std;

string inttoromam(int num){
    // Arrays of Roman numerals and their corresponding values
    vector<int>values = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string>numerals = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    string ans = "";
    for(int i=0;i<values.size();i++){
        // While the number is larger than the current value
        while(num>=values[i]){
            ans+=numerals[i];  // Append the corresponding Roman numeral
            num-=values[i]; // Append the corresponding
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    string roam = inttoromam(n);
    cout<<roam<<endl;
    return 0;
}