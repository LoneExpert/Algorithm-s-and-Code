/*
Problem Statement: Rohan is weak in mathematics.He is giving mathematics  Olympiad , but he got stuck in one of the question .Help rohan to solve the question.In Question there are two positive integer A and B. You have to find the product of all integer between A and B which is represented in the form C=D*10^E , where  C is the product of numbers , D and E are non-negative integers and the last digit of D is non-zero.

Function Description
Complete the function formatProducts in the editor below, formatProduct must return a string that represents C in the above described form.
Function has the following parameters
A: an integer
B: an integer
Constraints
   A will between 1 and 1,000,000 . Inclusive.
   B will be between A and 1,000,000. Inclusive.
Sample Input 0
1
5
Sample Output 0
12 * 10^1
Explanation
1*2*3*4*5=120 = 12 * 10^1
Sample Input 1
3
10
Sample Output 1
18144 * 10^2
Explanation
3*4*….*10=1814400 =18144 * 10^2
*/

// #include<iostream>
// using namespace std;

// int countfac(int num,int base){
//     int cnt = 0;
//     while(num%base==0){
//         cnt++;
//         num/=base;
//     }
//     return cnt;
// }

// string formatnumber(int a,int b){
//     int cnt2 = 0;
//     int cnt5 = 0;
//     int D = 1;
//     const int MOD = 1000000000;

//     for(int i=a;i<=b;i++){
//         int num = i;

//         cnt2+=countfac(num,2);
//         cnt5+=countfac(num,5);

//         //Remove the fac of 2 and 5 from num for good prod in D
//         while(num%2==0) num/=2;
//         while(num%5==0) num/=5;

//         D = (D*num)%MOD;
//     }

//     int E = min(cnt2,cnt5);

//     cnt2-=E;
//     cnt5-=E;

//     for(int i=0;i<cnt2;i++){
//         D = (D*2)%MOD;
//     }

//     for(int i=0;i<cnt5;i++){
//         D = (D*5)%MOD;
//     }

//     return to_string(D) + "*10^" + to_string(E);
// }

// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<formatnumber(a,b)<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;

int countfac(int num,int base){
    int cnt = 0;
    while(num%base == 0){
        cnt++;
        num/=base;
    }
    return cnt;
}

string formatnumber(int a, int b){
    int cnt2 = 0;
    int cnt5 = 0;
    int D = 1;
    const int MOD = 1000000000;

    for(int i=a;i<=b;i++){
        int num=i;

        cnt2+=countfac(num,2);
        cnt5+=countfac(num,5);

        //remove 2 and 5 factor from num
        while(num%2==0) num/=2;
        while(num%5==0) num/=5;

        D = (D*num)%MOD;
    }

        int E = min(cnt2,cnt5);

        cnt2-=E;
        cnt5-=E;

        for(int i=0;i<cnt2;i++){
            D = (D*2)%MOD;
        }
        for(int i=0;i<cnt5;i++){
            D = (D*5)%MOD;
        }

        return to_string(D) + "*10^" + to_string(E);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<formatnumber(a,b)<<endl;
    return 0;
}
