#include <stdio.h>
#define MAX(a,b) (((a)>(b))?(a):(b))
int main(void) {
	// your code goes here
	int t,i,n,r=0,g=0,b=0,max;
	char s[100005];
	scanf("%d",&t);
	while(t--)
	{
	    r=0;g=0;b=0;
	    scanf("%d",&n);
	    scanf("%s",s);
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='R')
	        r++;
	        else if(s[i]=='B')
	        b++;
	        else if(s[i]=='G')
	        g++;
	    }
	    max=MAX(r,b);
	    max=MAX(max,g);
	    printf("%d\n",n-max);
	}
	return 0;
}
