#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,k,t;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d%d%d",&n,&m,&k);
	while(k!=0)
	{
		if(n==m)
		break;
		if(n<m)
		n++;
		else if(m<n)
		m++;
		k--;
		
	}
	printf("%d\n",abs(m-n));
		
}return 0;}
