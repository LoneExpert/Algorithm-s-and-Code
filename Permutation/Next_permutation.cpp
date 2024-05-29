#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void nextpair(vector<int>&my,int n){
    int index = -1;

    for (int i = n-2; i>=0; i--)// pehla decrease element find
    {
        if(my[i]<my[i+1]){
            index=i;
            break;
        }
    }

    // If no decreasing element is found, reverse the entire array
    if(index==-1){
        reverse(my.begin(),my.end());
        return;
    }
    
    for(int i=n-1;i>=index;i--){ // first largest element to the right but larger than index 
        if(my[i]>my[index]){
            swap(my[i],my[index]);
            break;
        }
    }

    // reverse the subarray to the right of the index
    reverse(my.begin()+index+1,my.end());

}

int main()
{
    int n;
    cin>>n;
    vector<int>my(n);
    for(int i=0;i<n;i++){   
        cin>>my[i];
    }

    do{
        // this will give only one pair.. for all pair remove break and put (47 line) this code at line 51
        nextpair(my,n);
        for(int num:my){
            cout<<num<<" ";
        }
        cout<<endl;
        break;
    }while(!is_sorted(my.begin(), my.end()));
    
    return 0;
}