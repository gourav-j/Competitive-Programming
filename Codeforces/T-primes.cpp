/******************gourav_j**************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair

#define INF 1e18
#define MOD 1000000007

#define si(x) scanf("%d",&x)
#define slli(x) scanf("%lld",&x)
#define sli(x) scanf("%ld",&x)

#define pfi(x) printf("%d\n",x)
#define pfli(x) printf("%ld\n",x)
#define pflli(x) printf("%lld\n",x)

#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))


#define fori(i,a,b) for(int  i=(a);i<(b);i++)
#define forl(i,a,b) for(ll  i=(a);i<(b);i++)
#define rfor(i,a,b) for(int i=(b);i>=(a);i--)

ll pr[1000000];
void prime(int sz)
 {pr[0]=1;pr[1]=1;for(int i=2;i<=sz;i++){if(!pr[i]) {for(int j=2;j*i<=sz;j++) {pr[i*j]=1;}}}}
int t; 

int main() {
	// your code goes here
    //ios::sync_with_stdio(false);
    t=1;
    //cin>>t;
    int n;
    ll a,x;
    while(t--){
    	cin>>n;
        prime(1000000);
        fori(i,0,n)
        {
            cin>>a;
            x=sqrt(a);
           
            if(x*x==a&&pr[x]==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
   }
	return 0;
}