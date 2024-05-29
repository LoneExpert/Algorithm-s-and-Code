#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

/*Best code to find fibonacci number by recursion with 3 parameters

int f(int n,int a,int b){
    if(n==0){
        return a;
    }
    if(n==1){
        return b;
    }
    // int count=0;
    return f(n-1, b, a+b);


}  

int main(){
    int n;
    cin>>n;
    cout<<f(n,0,1);
}
*/

/* How many times function is called
int f(int n,int a,int b,int &call){
    if(n==0){
        return a;
    }
    if(n==1){
        return b;
    }
    call++;
    return f(n-1, b, a+b,call);
}   

int main(){
    int n;
    cin>>n;
    int call = 0;
    int result = f(n,0,1,call);
    cout<<result<<endl;
    cout<<call;
}
*/

/* Fibonacci Number by golden ratio*

long long fibonacci(int n){
    // Why use of long double instead of double because pow function returns a floating-point number, 
    // and I am storing the result in a long long variable, which can lead to
    // precision issues and maybe my answer can be wwrong , 
    // mainly for large Fibonacci numbers. 
    if(n<=1){
        return n;
    }
    long double goldenratio = (1+sqrt(5))/2;  // equals to 1.61803398875

    return round((pow(goldenratio,n)-pow(1-goldenratio,n))/sqrt(5));
    // The use of round functuion is because to convert the ans into nearest long long integer ensuring 
    // that it is rounded to a nearest for accuracy. 
    // It will handle negative number also; advantage of using golden ratio that recursion with
    // memoization or recursion with dp or recursion passing with 3 parametrs can't do.
    
    // From chatgtp-:
    // We use long long instead of int for the fibonacci function to handle larger Fibonacci numbers 
    // without integer overflow. The Fibonacci sequence grows exponentially, and as you calculate 
    // Fibonacci numbers for larger values of n, the result can quickly exceed the range that can be 
    // represented by a standard int data type.
    // An int typically has a limited range, often from -2,147,483,648 to 2,147,483,647 on systems 
    // using 32-bit integers. Beyond this range, arithmetic overflow can occur, and the results 
    // become incorrect.
    // Using a long long data type allows you to work with a much larger range of Fibonacci numbers.
    // A long long typically has a range of at least -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 
    // on systems using 64-bit integers, which can handle significantly larger Fibonacci numbers before 
    // encountering overflow issues.
    // So, when working with Fibonacci numbers beyond a certain point, it's essential to use a data 
    // type like long long to ensure accurate results and prevent overflow errors.
}

int main(){
    int n;
    cin>>n;
    long long result = fibonacci(n);
    cout<<result<<endl;
}

*/


/*
typedef vector<vector<long long>> Matrix;


Matrix matrixMultiply(const Matrix& A, const Matrix& B) {
    int rowsA = A.size();
    int colsA = A[0].size();
    int colsB = B[0].size();

    Matrix result(rowsA, vector<long long>(colsB, 0)); // matrix with rowA and colsB with 0

    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return result;
}

// Function to calculate the nth Fibonacci number using matrix exponentiation
long long fibonacciByMatrix(int n) {
    if (n <= 1) {
        return n;
    }

    Matrix F = {{1, 1}, {1, 0}};
    Matrix result = {{1, 0}, {0, 1}}; // Identity matrix diagonal 

    while (n > 0) {
        if (n % 2 == 1) {
            result = matrixMultiply(result, F);
        }
        F = matrixMultiply(F, F);
        n /= 2;
    }

    return result[0][1];
}


int main(){
    int n;
    cin>>n;
    long long result = fibonacciByMatrix(n);
    cout<<result<<endl;
}
*/

// The matrix method is more efficient than other recursive methods for large fibonacci number



/* Basic Recursion Code for fibonacci number

int f(int n){
    if(n<=1){
        return n;
    }
    return f(n-1)+f(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n);

    return 0;
}

*/

/* Recursion Code for fibonacci number by storing the value

int f(int n){
    if(n<=1){
        return n;
    }

    vector<int>f(n+1); // storing the value

    f[0] = 0;
    f[1] = 1;

    for(int i=2;i<=n;i++){
        f[i] = f[i-1]+ f[i-2]; //  memoizaion for decreasing the redundant calls

    }
    return f[n];

}

int main(){
    int n;
    cin>>n;
    cout<<f(n);
}
*/

/* Fibonacci by three variable

int main(){
    int n;
    cin>>n;
    if(n==0 || n==1){
        cout<<1<<endl;
    }
    int a = 0;
    int b = 1;
    int temp;
    for(int i=2;i<=n;i++){
        temp = a+b;
        a=b;
        b=temp;
    }
    cout<<temp<<endl;

}
*/

/*Fibonacci by two variable*/
// int main(){
//     int n;
//     cin>>n;
//     int a = 0;
//     int b = 1;
//     for(int i=2;i<=n;i++){
//         int temp = a;
//         a=b;
//         b = temp+b;
//     }
//     cout<<b<<endl;
// }   


// for more large number//

long long f(int n, int mod){
    long long a=0;
    long long b=1;
    long long res=0;

    for(int i=2;i<=n;i++){
        res = (a+b)%mod;
        a=b;
        b=res;
    }

    return res;

}

int main(){
    int n;
    cin>>n; 
    long long mod = 1e9+7;
    long long res = f(n,mod);
    cout<<res<<endl;
}