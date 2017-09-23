#include <stdio.h>
int main(void) {
	// your code goes here
	int t,n,k,i,a[105];
	scanf("%d",&t);
	while(t--)
	{
	    int c=0,b[105];
	    scanf("%d%d",&n,&k);
	    for(i=1;i<=n;i++){
	        b[i]=0;
	    scanf("%d",&a[i]);}
	    for(i=1;i<=n;i++){
	        if(a[i]!=i)
	        b[a[i]]++;
	        else
	        b[a[i]]=-999;
	    }
	    for(i=1;i<=n;i++)
	    {
	        if(b[i]>=k)
	        c++;
	    }
	    printf("%d\n",c);
	}
	return 0;
}
