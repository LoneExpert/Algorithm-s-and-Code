//  Karatsuba algorithm
        int n = num1.size();
        int m = num2.size();
        if(n==0 || m==0){
            return "0";
        }

        vector<int>result(n+m,0);
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int mul = (num1[i]-'0')*(num2[j]-'0');
                int sum = mul+result[i+j+1];

                result[i+j]+= sum/10; //  carry add
                result[i+j+1] = sum%10;
            }
        }

        int i=0;
        while(i<n+m && result[i]==0){
            i++;
        }

        if(i==n+m){
            return "0";
        }

        string ans = "";
        while(i<n+m){
            ans+=to_string(result[i]);
            i++;
        }
        return ans;