#include <stdio.h>

int main(void) {
    int n ,i,ar[1005];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    if(ar[n-1]==0)
    {
        printf("UP");
        return 0;
    }
    if(ar[n-1]==15){
        printf("DOWN");
        return 0;
    }
    if(n==1){
    printf("-1");
    return 0;}
    
    if(ar[n-1]-ar[n-2]<0)
    printf("DOWN");
    else
    printf("UP");
	// your code goes here
	return 0;
}