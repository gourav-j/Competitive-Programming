#include <stdio.h>
#define ll long long
int main(void) {
	// your code goes here
	ll t,a,b,c,d,sum,i;
	scanf("%lld",&t);
	while(t--)
	{
	    sum=0;
	    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	    if(a>=d)
	    sum=0;
	    else
	    for(i=a;i<=b;i++){
	        if(i>=d)
	        sum+=0;
	        else if(i<c&&i<d)
	        sum+=(d-c+1);
	        else if(i>=c)
	        sum+=(d-i);
	        
	    }
	    printf("%lld\n",sum);
	}
	return 0;
}
