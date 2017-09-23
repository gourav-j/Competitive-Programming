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
#define forl(i,a,b) for(lli  i=(a);i<(b);i++)
#define rfor(i,a,b) for(int i=(b);i>=(a);i--)

typedef pair<ll,ll> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;

inline int mult(int a , int b) { ll x = a; x *= ll(b); if(x >= MOD) x %= MOD; return x; }
inline int add(int a , int b) { return a + b >= MOD ? a + b - MOD : a + b; }
inline int sub(int a , int b) { return a - b < 0 ? MOD - b + a : a - b; }
ll powmod(ll a,ll b) { if(b==0)return 1; ll x=powmod(a,b/2); ll y=(x*x)%MOD; if(b%2) return (a*y)%MOD; return y%MOD; }

/*Inverse Euler*/
ll InverseEuler(ll n)
{
    return powmod(n,MOD-2);
}
/* prime*/
ll pr[1000000];
void prime(int sz)
 {pr[0]=1;pr[1]=1;for(int i=2;i<=sz;i++){if(!pr[i]) {for(int j=2;j*i<=sz;j++) {pr[i*j]=1;}}}}

/* comb* ncr*/
ll  comb[1001][1001];
ll combination()
  {for(int i = 0; i < 1000; i++) {comb[i][0] = 1;for(int j = 1; j <= i; j++)comb[i][j] = (comb[i - 1][j] + comb[i - 1][j - 1]) % MOD;}}
  
/*gcd*/
ll gcd(ll a, ll b){ if(b)return gcd(b,a%b); return a;}

/* prime factor of all numbers from 1 to till n */;
bool  factu[10000010];vector<int> fact[10000010];
int  factor(int  n)
 {fact[1].push_back(1);for(int i=2;i<=n;i++){ if(!factu[i]){for(int j=i;j<=n;j+=i){factu[j]=1;fact[j].push_back(i);}}}}
 
int t,ar[100][100];

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    t=1;
    //cin>>t;
    int n,flag=0,a[1005],b[1005];
    while(t--){
    	cin>>n;
    	for(int i=0;i<n;i++){
    		cin>>a[i]>>b[i];
    		if(a[i]!=b[i])
    			return cout<<"rated",0;
    	}	
    	for(int i=0;i<n-1;i++){
    		if(a[i]>=a[i+1])
    			continue;
    		
    		flag=1;
    		break;
    	}
    	if(flag)
    		cout<<"unrated";
    	else
    		cout<<"maybe";
    }
	return 0;
}