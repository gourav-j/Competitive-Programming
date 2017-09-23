#include <stdio.h>
int main(void) {
    int t,i,n;
    long long c=0,a=1;
    long long int ar[100001];
    scanf("%d",&t);
    while(t--!=0)
    {
        scanf("%d",&n);
        c=0;a=1;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&ar[i]);
        }
        for(i=0;i<n-1;i++)
        {
            if(ar[i]<=ar[i+1])
            a++;
            else
            {
                c+=(a*(a+1))/2;
                a=1;
            }
        }
        c+=(a*(a+1))/2;
        printf("%lld\n",c);
    }
    
	// your code goes here
	return 0;
}
