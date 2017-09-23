#include <stdio.h>
#include<stdlib.h>
int main(void) {
	// your code goes here
	int t,m;
	double c,d,p;
	scanf("%d",&t);
	while(t--!=0)
	{
	    scanf("%d",&m);
	    scanf("%lf",&p);
	    if(p==1)
	    {
	        if(m%2==0)
	        {
	            printf("0.0 1000000000.0\n");
	        }
	        else
	        printf("1000000000.0 0.0\n");
	        continue;
	    }
	    if(m==1)
	    {
	        printf("1000000000.0 0.0\n");
	    }
	    else 
	    {
	        d=(1000000000*p)*(1-pow((-p),m-1))/(1+p);
	        c=1000000000-d;
	        printf("%lf %lf\n",c,d);
	    }
	}
	
	return 0;
}
