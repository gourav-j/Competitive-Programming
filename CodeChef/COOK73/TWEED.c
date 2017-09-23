#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
	// your code goes here
int t,n;char c[4];int i,ar[55];
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
scanf("%s",c);
for(i=0;i<n;i++)
{scanf("%d",&ar[i]);}
if(strcmp(c,"Dee")==0&&n==1&&ar[0]%2==0)
printf("Dee\n");
else
printf("Dum\n");
}
return 0;
}
