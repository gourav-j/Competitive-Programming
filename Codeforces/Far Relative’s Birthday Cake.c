#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    char ar[n][n];
    int i,j,c=0,p=0,d=0;

        for(j=0;j<n;j++)
        {

            scanf("%s",&ar[j]);
        //fflush(stdin);
    }
    for(i=0;i<n;i++)
    {
        c=0;d=0;
        for(j=0;j<n;j++)
        {
            if(ar[j][i]=='C')
                c++;
                if(ar[i][j]=='C')
                        d++;

        }
        //printf("%d",c);
        p+=(c*(c-1))/2;
        p+=(d*(d-1)/2);

    }
    printf("%d",p);
    return 0;
}