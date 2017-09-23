/******************gourav_j**************/
#include <bits/stdc++.h>
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

inline ll add(ll a , ll b) { return a + b >= MOD ? a + b - MOD : a + b; }

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

int t;ll dp[101][2];
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    t=1;
    ll n,k,d;
    
    //cin>>t;
   while(t--){
    	cin>>n>>k>>d;
    	dp[0][0]=1;
    	fori(i,1,n+1)
    	{
    		fori(j,1,MIN(i,k)+1){
    			if(j<d){
    				dp[i][0]=add(dp[i][0],dp[i-j][0]);
    				dp[i][1]=add(dp[i][1],dp[i-j][1]);
       			}
       			else{
       				dp[i][1]=add(dp[i][1],dp[i-j][0]);
       				dp[i][1]=add(dp[i][1],dp[i-j][1]);
       			}
    		}
    	}
    	cout<<dp[n][1];
   }
	return 0;
}