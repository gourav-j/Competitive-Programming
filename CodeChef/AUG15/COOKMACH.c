#include<stdio.h>
void main()
{
	int t,k=0;
	long int a,b;
	scanf("%d",&t);
	while(t--!=0)
	{
		scanf("%ld",&a);
		scanf("%ld",&b);
		if(isPowOfTwo(a)==1)
			k=mult(a,b);
		else
		{
			while(isPowOfTwo(a)==0)
				{
					if(a%2==1)
					a=(a-1)/2;
					else
					a=a/2;
					k++;
				}
			k=k+mult(a,b);
		}
		printf("%d\n",k);
		k=0;
	}
	
}
int isPowOfTwo(int a)
{
	if(a==1)
		return 1;
	while(a!=1)
	{
		if(a%2!=0)
			return 0;
		a=a/2;
	}
	return 1;
}
int mult(int a,int b)
{
	int k=0;
	if(a>b)
	{
		while(a!=b)
		{
			a/=2;
			k++;
		}
	}
	else
	{
		while(a!=b)
		{
			a*=2;
			k++;
		}
	}
	return k;
}
