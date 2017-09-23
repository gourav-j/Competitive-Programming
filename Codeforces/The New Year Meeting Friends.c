#include <stdio.h>
#include<stdlib.h>
int main(void) {
	// your code goes here
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a<c||a<b&&a>c)
	d=abs(a-b)+abs(a-c);
	else if(b>a&&b<c||a>b&&b>c)
	d=abs(a-b)+abs(b-c);
	else if(c>b&&a>c||c<b&&c>a)
	d=abs(c-b)+abs(a-c);
	printf("%d\n",d);
	return 0;
}