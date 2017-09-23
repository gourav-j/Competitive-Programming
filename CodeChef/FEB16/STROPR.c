#include <stdio.h>
#define c 1000000007
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	long long int n,m,x,i;
	while(t--)
	{
	    scanf("%lld%lld%lld",&n,&x,&m);
    	long long int ar[n];
    	for(i=0;i<n;i++)
    	scanf("%lld",&ar[i]);
    	if(x==1){ printf("%lld\n",ar[0]%c);continue;}
	    while(m--)
	    {
	        for(i=1;i<x;i++)
	        ar[i]=ar[i]%c+ar[i-1]%c;
	    }
	    printf("%lld\n",ar[x-1]%c);
	}
	return 0;
}
