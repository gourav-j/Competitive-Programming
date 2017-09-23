#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    // base case
    if (a == b)
        return a;
 
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
 
// Function to return LCM of two numbers
int lcm(int a, int b)
{
    return (a*b)/gcd(a, b);
}
int main() {
	// your code goes here
	int n,m,z;
	cin>>n>>m>>z;
	int k=lcm(n,m);
	cout<<z/k;
	return 0;
}