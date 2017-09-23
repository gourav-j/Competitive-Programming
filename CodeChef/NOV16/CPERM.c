#include <stdio.h>
#define MOD 1000000007
int modRecursion(long long a, long long b, long long c)
{
    if(b == 0)
    return 1;
    if(b == 1)
    return a%c;
    else if( b%2 == 0)                                           //if b is even
    {
        return modRecursion((a *a)%c,b/2,c);
    }
    else                                                                    // if b is odd.
    {
        return (a*modRecursion((a*a%c),b/2,c))%c;
    }
}
int main(void) {
	// your code goes here
	long long t,n;
	scanf("%lld",&t);
	while(t--){
	    scanf("%lld",&n);
	    if(n==1){
	        printf("0\n");
	        continue;
	    }
	long long ans=1,i;
	i=modRecursion(2,n-1,1000000007);
	ans=i-2;
	printf("%lld\n",ans);
	}
	return 0;
}
