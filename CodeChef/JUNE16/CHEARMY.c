#include <stdio.h>
#define ll long long int
int main(void) {
	// your code goes here
	ll t,k;
	scanf("%lld",&t);
	while(t--)
	{
	    ll r,s=0,c=1;
	    scanf("%lld",&k);
	    k=k-1;
	    while(k>0)
	    {
	        r=k%5;
	        s=r*c+s;
	        c=c*10;
	        k=k/5;
	    }
	    s=s*2;
	    printf("%lld\n",s);
	}
	return 0;
}
