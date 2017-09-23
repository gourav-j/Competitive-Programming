#include <stdio.h>
#include<stdlib.h>
#define ll long long int
int max(ll a,ll b){if(a>b)return a;else return b;}
int min(ll a,ll b){if(a>b)return b;else return a;}
int main(void) {
	// your code goes here
    ll n,q,ar[100009],ma,mi,i,t;
    scanf("%lld%lld",&n,&q);
    
    scanf("%lld",&ar[0]);
    ma=ar[0];mi=ar[0];
    for(i=1;i<n;i++)
    {scanf("%lld",&ar[i]);
        ma=max(ma,ar[i]);
        mi=min(mi,ar[i]);
    }
    
    while(q--){
        scanf("%lld",&t);
        if(t>=mi&&t<=ma)
        printf("Yes\n");
        else
        printf("No\n");
    }
	return 0;
}
