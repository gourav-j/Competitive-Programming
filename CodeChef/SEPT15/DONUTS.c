#include <stdio.h>
void radixsort(int*,int);
int main(void) {
	// your code goes here
	int t,n,m,i,cnt=0,p,f=0;
	static int br[20000];
	scanf("%d",&t);
	while(t--!=0)
	{
	    cnt=0;f=0;
	    scanf("%d",&n);
	    scanf("%d",&m);
	    for(i=0;i<m;i++)
	    {
	       scanf("%d",&br[i]);
	       if(br[i]!=1)
	       f=1;
	    }
	   i=0;p=m-1;
	   if(m==1)
	   cnt=0;
	   else if(m==2)
	   cnt=1;
	   else if(f==1&&m>2)
	   {
	       radixsort(br, m);
		   while(1)
	   {
	       br[i]=br[i]-1;
	       br[p-1]=br[p-1]+br[p];
	       p--;
	       cnt++;
	       if(br[i]==0)
	       i++;
	       if(p==i||br[i]==n)
	       break;
	   }
	   }
	   else
	   cnt=n/2;
	   printf("%d\n",cnt);
	}  
	return 0;
}
 
 
 
int getMax(int arr[], int n)
{
    int mx = arr[0];
    int i;
    for (i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}
void countSort(int arr[], int n, int exp)
{
    int output[n]; 
    int i, count[10] = {0};
    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}
void radixsort(int arr[], int n)
{
    int m = getMax(arr, n);
    int exp;
    for (exp = 1; m/exp > 0; exp *= 10)
        countSort(arr, n, exp);
}
