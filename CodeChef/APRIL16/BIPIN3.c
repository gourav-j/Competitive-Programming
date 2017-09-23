#include <stdio.h>
#define mod 1000000007
long long int modular_pow(long long int base, long long int exponent)
{
    long long int result=1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % mod;
        exponent = exponent >> 1;
        base = (base * base) % mod;
    }
    return result;
}
int main(void) {
	// your code goes here
	long long int t,n,k,p=1;;
	scanf("%lld",&t);
	while(t--)
	{
	    p=1;
	    scanf("%lld%lld",&n,&k);
	    p=modular_pow(k-1,n-1);
	    p=(p%mod*k%mod)%mod;
	    printf("%lld\n",p);
	}
	return 0;
}
