#include <stdio.h>
#define ll long long int
int main(void) {
	// your code goes here
	ll n,w,l;
	scanf("%lld%lld%lld",&n,&w,&l);
	ll h[n],r[n],i;
	for(i=0;i<n;i++)
	{
	    scanf("%lld %lld",&h[i],&r[i]);
	}
	ll k=0;
	while(1)
	{ll sum=0;
	    for(i=0;i<n;i++){
	        h[i]=h[i]+r[i];
	        if(h[i]>=l)
	        sum=sum+h[i];
	    }
	    k++;
	    if(sum>=w)
	    break;
	}
	printf("%lld",k);
	return 0;
}
