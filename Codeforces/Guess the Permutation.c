#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,max,pos;
	scanf("%d",&n);
	int ar[n][n];
	int k=1,z;
	int br[n];
	int p[n];
	for(i=0;i<n;i++)
	{p[i]=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	while(k!=n){
	
	for(z=0;z<n;z++)
		br[z]=0;
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		{
			if(ar[i][j]==k)
			br[j]++;
		}	
	}
	max=br[0];pos=0;
	for(z=0;z<n;z++)
	{
		if(br[z]>=max)
		{
			max=br[z];pos=z;
		}
	}
	p[pos]=k;
	k++;}
	for(z=0;z<n;z++)
	{
		if(p[z]!=0)
		printf("%d ",p[z]);
		else
		printf("%d ",n);
	}
return 0;
}