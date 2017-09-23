#include <stdio.h>
#define  ll long long 
int main(void) {
	// your code goes here
	ll n,i ,j,d,x[1005],y[1005];ll max=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++){
	    scanf("%lld%lld",&x[i],&y[i]);
	    if(i==0){
	        printf("0\n");continue;
	    }
	    
	    for(j=0;j<i;j++)
	    {
	        d=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
	        
	        if(d>max)
	        max=d;
	    }
	    printf("%lld\n",max);
	}
	return 0;
}
