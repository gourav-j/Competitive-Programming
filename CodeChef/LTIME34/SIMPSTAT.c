#include <stdio.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main(void) {
	// your code goes here
	int t,i;
	float s=0;
	scanf("%d",&t);
	while(t--)
	{
	    s=0;
	    int n,k;
	    scanf("%d%d",&n,&k);
	    int ar[n];
	    for(i=0;i<n;i++)
	    scanf("%d",&ar[i]);
	    qsort(ar,n,sizeof(int),cmpfunc);
	    for(i=k;i<n-k;i++)
	    s+=ar[i];
	    s=s/(n-2*k);
	    printf("%f\n",s);
	}
	return 0;
}
