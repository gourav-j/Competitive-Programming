#include <stdio.h>
int main(void) {
	// your code goes here
	long long int c=0,t,n=0,r,g,b,k;
	scanf("%lld",&t);
	while(t--)
	{
	    c=0;n=0;
	    scanf("%lld%lld%lld",&r,&g,&b);
	    scanf("%lld",&k);
	    if(k==1)
	    printf("1\n");
	    else
	    {
	       if(r-k>=0)
	       c+=k-1;
	       else
	       c+=r;
	       if(g-k>=0)
	       c+=k-1;
	       else
	       c+=g;
	       if(b-k>=0)
	       c+=k-1;
	       else
	       c+=b;
	       printf("%lld\n",c+1);
	    }
	    
	}
	return 0;
}
