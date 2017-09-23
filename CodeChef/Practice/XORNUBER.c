#include<stdio.h>
#include<math.h>
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int n;
		scanf("%ld",&n);
		if(n==1)
		printf("2\n");
		else
		{
		long int m;
		m=n/2;
		if((m^(m+1))==n)
		printf("%ld\n",m);
		else
		printf("-1\n");
		}
		
	}
	return 0;
}
