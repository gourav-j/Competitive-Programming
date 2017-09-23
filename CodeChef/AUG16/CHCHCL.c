#include <stdio.h>
#define ll long long
int main(void) {
	// your code goes here
	ll t,m,n;
	scanf("%lld",&t);
	while(t--){
	    scanf("%lld%lld",&n,&m);
	    if(n%2==1 && m%2==1)
	    printf("No\n");
	    else 
	    printf("Yes\n");
	}
	return 0;
}
