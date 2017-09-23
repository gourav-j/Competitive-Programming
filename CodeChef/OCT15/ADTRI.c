#include <stdio.h>
#include<stdlib.h>
int main(void) {
	// your code goes here
	int t,fl;
	long long int n=0,i;
	long double f=0;
	scanf("%lld",&t);
	while(t--)
	{
	    fl=0;
	    scanf("%d",&n);
	    for(i=1;i<n;i++)
	    {
	        f=sqrt(n*n-i*i);
	        if((long int)f==f)
	        {fl=1;break;}
	    }
	    if(fl==1)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}
