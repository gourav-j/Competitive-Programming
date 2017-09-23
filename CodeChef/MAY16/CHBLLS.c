#include <stdio.h>
int main(void) {
	// your code goes here
	//setlinebuf(stdout);
	int n;char s[100];
	printf("1\n");
	printf("3 1 2 2\n3 3 4 4\n");
	fflush(stdout);
	scanf("%d",&n);
	if(n==0)
	{
	    printf("2\n5");
	}
    else if(n==2)
    {
       printf("2\n2");
    }
    else if(n==1)
    printf("2\n1");
    else if(n==-1)
    printf("2\n3");
    else if(n==-2)
    printf("2\n4");
	return 0;
}
