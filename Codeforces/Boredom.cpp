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

int t;  
ll cnt[100005],dp[100005];
int main() {
	// your code goes here
    //ios::sync_with_stdio(false);
    t=1;
    //cin>>t;
    int n;
    ll mx=0,ar;
    while(t--){
    	cin>>n;
       	fori(i,0,n)
       	{
       		cin>>ar;
       		cnt[ar]++;
       		mx=MAX(mx,ar);
       		
       	}
       	dp[1]=cnt[1];
       	cnt[0]=0;
       	forl(i,2,mx+1){
       		dp[i]=MAX(dp[i-1],dp[i-2]+cnt[i]*i);
       		//cout<<dp[i]<< " ";
       		//cout<<mx<<" ";
       	}
       	//cout<<mx;
       	cout<<dp[mx];
   }
	return 0;
}