#include <stdio.h>
#include<stdlib.h>
int main(void) {
	// your code goes here
	int t,n,i,j,cnt=0;
	static int ar[500][500];
	static int br[500000];
	scanf("%d",&t);
	while(t--!=0)
	{
	    cnt=0;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            scanf("%d",&ar[i][j]);
	            br[ar[i][j]*2-2]=i;
	            br[ar[i][j]*2-1]=j;
	        }
	    }
	   for(i=0;i<n*n*2-2;i=i+1)
	   {
	       cnt+=abs(br[i]-br[i+2]);
	   }
	   printf("%d\n",cnt);
	}  
	return 0;
}
