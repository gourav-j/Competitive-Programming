#include <stdio.h>
int main(void) {
	// your code goes here
	int t,d,n,i;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d",&d,&n);
	    for(i=1;i<=d;i++)
	    {
	        n=(n*(n+1))/2;
	    }
	    printf("%d\n",n);
	}
	return 0;
}
