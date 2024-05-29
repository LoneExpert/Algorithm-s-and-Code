#include<iostream>
#include<algorithm>

using namespace std;

bool validtime(int h, int m) {
    return (h >= 0 && h < 24) && (m >= 0 && m < 60);
}


int main()
{
    int time[4];
    cout<<"Enter the 4 digit to generate the number"<<endl;
    for(int i=0;i<4;i++){
        cin>>time[i];
    }

    sort(time, time+4, greater<int>()); 
    // greater<int>() for greater than comparision 
    // Bacially it does comparison operation in such a way that it sorts elements in descending order
    // So when you call a sort function with a greater func it will sort in a descending order.

    do{
        int hours = time[0] * 10  +time[1]; 
        int min = time[2] * 10  +time[3];
        if(validtime(hours,min)){
            cout<<"The Time is "<<hours<<":"<<min<<endl;
            return 0; // to end the function here only not going to while cond.
        }
    }while (prev_permutation(time,time+4));
        // basiclly it generates the lexicographically previous permutation of the time array.
        // it is done so that more combination can be done
    cout<<"Invalid combination of digits."<<endl;

    return 0;
}