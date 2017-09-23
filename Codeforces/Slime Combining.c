#include<stdio.h>
int main()
{
	int n,i=0,j;
	scanf("%d",&n);
	int ar[n];
	while(n--)
	{
		ar[i]=1;
		if(i>0)
		while(ar[i]==ar[i-1])
		{
			if(i>0)
			ar[i-1]+=1;
			i--;
			
		}
		i++;
	}
	for(j=0;j<i;j++)
	printf("%d ",ar[j]);
	return 0;
}