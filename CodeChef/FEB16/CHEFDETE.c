#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n],br[n];
     for(i=0;i<n;i++)
    {
        br[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]!=0)
        br[ar[i]-1]++;
    }
    for(i=0;i<n;i++)
    {
        if(br[i]==0)
            printf("%d ",i+1);
    }
    return 0;
}
