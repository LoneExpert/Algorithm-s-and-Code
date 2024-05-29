#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int main()
{
	int a = 10, b = 15;
    cout<<gcd(a, b)<<endl;

	a = 35, b = 10;
	cout<<gcd(a, b)<<endl;

	a = 31, b = 2;
	cout<<gcd(a, b)<<endl;
	return 0;
}
