#include <stdio.h>
int main(void) {
	// your code goes here
	long long int j,s,m,c=0;
	scanf("%lld%lld%lld",&j,&s,&m);
	m=m-j;
	m=m/s;
	if(m%2==0)
	printf("Lucky Chef\n");
	else
	printf("Unlucky Chef\n");
	return 0;
}
