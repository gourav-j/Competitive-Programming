#include <iostream>
using namespace std;
long long fast_pow(int a,int n)
{
    long long result = 1;
    long long power = n;
    long long value = a;
    while(power>0)
    {
        if(power&1)
            {result = result*value;
            result = result%10;}
        value = value*value;
        value = value%10;
        power /= 2;
        //power >>= 1;
    }
    return result;
}
int main() {
	// your code goes here
	long long int n;long long int ans=1;
	cin>>n;
	ans=fast_pow(8,n);
	cout<<ans%10<<endl;
	return 0;
}