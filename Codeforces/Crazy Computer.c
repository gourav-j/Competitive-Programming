#include <stdio.h>
#define ll long long
#define max(a,b){if(a>b)return a;else return b;}
#define min(a,b){if(a<b)return a;else return b;}
int main(void) {
	// your code goes here
	ll n,i,c=0,count=1;
	scanf("%lld%lld",&n,&c);
	ll ar[n];
	for(i=0;i<n;i++)
	scanf("%lld",&ar[i]);
	for(i=0;i<n-1;i++)
	{
	    if(ar[i+1]-ar[i]>c)
	    count=1;
	    else
	    count++;
	}
	printf("%lld\n",count);
	return 0;
}