#include <stdio.h>
int main(void) {
	// your code goes here
	int t,m,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d",&n,&m);
	    if(m==n)
	    printf("No Winner\n");
	    else if(m>n)
	    printf("Balaji %d\n",m-n);
	    else
	    printf("Bipin %d\n",n-m);
	}
	return 0;
}
