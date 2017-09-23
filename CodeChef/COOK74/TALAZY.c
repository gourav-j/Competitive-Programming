#include <stdio.h>
#define ll long long
#define max(a,b){if(a>b)return a;else return b;}
#define min(a,b){if(a<b)return a;else return b;}
int main(void) {
	// your code goes here
	ll n,t,i,b,m,c=0,z;
	scanf("%lld",&t);
	while(t--)
	{
	    c=0;z=0;
	    scanf("%lld%lld%lld",&n,&b,&m);
	    while(n!=0){
	        if(n%2==0)
	        z=n/2;
	        else
	        z=(n+1)/2;
	        c+=z*m;
	        m=m*2;
	        c+=b;
	        n=n-z;
	    }
	    printf("%lld\n",c-b);
	}
	return 0;
}
