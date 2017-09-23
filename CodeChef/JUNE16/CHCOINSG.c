#include <stdio.h>
#define ll long long int
int main(void) {
	// your code goes here
	ll n,t;
	scanf("%lld",&t);
	while(t--)
	{
	    scanf("%lld",&n);
	    if(n%6==0)
	    printf("Misha\n");
	    else
	    printf("Chef\n");
	}
	return 0;
}
