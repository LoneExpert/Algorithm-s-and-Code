#include<iostream>
using namespace std;

int main()
{
    string s = "abcdef";
    int n = s.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=i){
                for(int k=0;k<n;k++){
                    if(k!=j && k!=i){
                        for(int q=0;q<n;q++){
                            if(q!=k && q!=j && q!=i){
                                for(int w = 0;w<n;w++){
                                    if(w!=q && w!=k && w!=j && w!=i){
                                        for(int h = 0;h<n;h++){ 
                                            if(w!=q && w!=k && w!=j && w!=i){
                                                cout<<s[i]<<s[j]<<s[k]<<s[q]<<s[w]<<endl;
                                            }
                                        }    
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }    
    }
    return 0;
}
