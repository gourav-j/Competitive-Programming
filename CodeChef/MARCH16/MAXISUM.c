#include <stdio.h>
#include<stdlib.h>
int main(void) {
	// your code goes here
	long long int t,n,i,s=0,k,max;
	scanf("%lld",&t);
	while(t--)
	{
	    s=0;
	    scanf("%lld%lld",&n,&k);
	    long long int a[n],b[n];
	    for(i=0;i<n;i++)
	    scanf("%lld",&a[i]);
	    for(i=0;i<n;i++)
	    {
	        scanf("%lld",&b[i]);
	        s+=a[i]*b[i];
	        if(i==0)
	        {
	            max=b[0];
	        }
	        if(max<abs(b[i]))
	        max=abs(b[i]);
	    }
	    s+=max*k;
	    printf("%lld\n",s);
	}
	return 0;
}
