// #include<iostream>
// #include<vector>
// using namespace std;


// vector<int>prime(int n){
//     vector<int>fac;
//     int div = 2;
//     while (n > 1)
//     {
//         while (n % div == 0)
//         {
//             fac.push_back(div);
//             n /= div;
//             if (n != 2 && n != 3 && n != 5)
//             {
//                 return fac; 
//             }
//         }
//         div++;
//     }
//     return fac;
    
// }

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>res = prime(n);

//     cout<<"The prime factors of num are "<<n<<endl;
//     for(int i:res){
//         cout<<i<<" ";
//     }
//     cout<<endl;
    
//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;

vector<int> primeFactors(int n) {
    vector<int> factors;

    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }

    if (n > 2) {
        factors.push_back(n);
    }

    return factors;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> factors = primeFactors(n);

    cout << "Prime factors of " << n << " are: ";
    for (int factor : factors) {
        cout << factor << " ";
    }
    cout << endl;

    return 0;
}
