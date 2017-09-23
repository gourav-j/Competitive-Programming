#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void) {
	// your code goes here
	long long int i,k,s;
	long double ai,bi,a,b,ak,bk,a1,b1,c,d,q;
	scanf("%lld",&i);
	scanf("%lld",&k);
	scanf("%lld",&s);
	scanf("%Lf",&ai);
	scanf("%Lf",&bi);
	if(i%2==0&&k%2==0)
	{
	    i=(i-1)/2;
	    a1=ai/(pow(16,i));
	    b1=bi/(pow(16,i));
	    s=s-(k-1)/2*4;
	    q=(a1+b1)/(pow(2,s));
	}
	else if(i%2==0&&k%2!=0)
	{
	    a=sqrt(2)*(ai+bi)-sqrt(2)*sqrt(3)*(ai-bi);
	    b=sqrt(2)*(ai-bi)+sqrt(2)*sqrt(3)*(ai+bi);
	    a1=a/(pow(16,i/2));
	    b1=b/(pow(16,i/2));
	    s=s-((k-1)/2)*4;
	    q=(a1+b1)/(pow(2,s));
	}
	else if(i%2!=0&&k%2==0)
    {
        a=sqrt(2)*(ai+bi)-sqrt(2)*sqrt(3)*(ai-bi);
	    b=sqrt(2)*(ai-bi)+sqrt(2)*sqrt(3)*(ai+bi);
	    i=i/2;
	    a1=a/(pow(16,i));
	    b1=b/(pow(16,i));
        s=s-((k-1)/2)*4;
        q=(a1+b1)/pow(2,s);
    }
    else if(i%2!=0&&k%2!=0)
    {
        i=i/2;
        a1=ai/(pow(16,i));
	    b1=bi/(pow(16,i));
	    s=s-((k-1)/2)*4;
	    q=(a1+b1)/pow(2,s);
    }
	printf("%Lf",q);
	return 0;
}
