#include<stdio.h>

int main()
{
	int ar[]={6,2,5,5,4,5,6,3,7,6};
	int a,b,i,r,z;
	long long int s=0;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		z=i;
		while(z>0)
		{
			r=z%10;
			z=z/10;
			s+=ar[r];
		}
		
	}
	printf("%lld\n",s);
return 0;
}