#include <stdio.h>
 
int main(void) {
	// your code goes here
	int t;long long int n,m;
	scanf("%d",&t);
	while(t--){
	    
	    scanf("%lld%lld",&n,&m);
	    if(n==1&&m==2){
	    printf("Yes\n");
	    }
	    else if(m==1&&n==2)
	    printf("Yes\n");
	     else if((n%2==0||m%2==0)&&(n!=1&&m!=1))
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	return 0;
}
