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

typedef pair<ll,ll> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<ll> vl;
typedef set<ll> si;

inline ll mult(int a , int b) { ll x = a; x *= ll(b); if(x >= MOD) x %= MOD; return x; }
inline ll add(int a , int b) { return a + b >= MOD ? a + b - MOD : a + b; }
inline ll sub(int a , int b) { return a - b < 0 ? MOD - b + a : a - b; }
ll powmod(ll a,ll b) { if(b==0)return 1; ll x=powmod(a,b/2); ll y=(x*x)%MOD; if(b%2) return (a*y)%MOD; return y%MOD; }
ll power(ll a,ll b) { if(b==0)return 1; ll x=power(a,b/2); ll y=(x*x); if(b%2) return (a*y); return y; }

/*Inverse Euler*/
ll InverseEuler(ll n)
{
    return powmod(n,MOD-2);
}
isLucky(int n){
	while(n>0){
		if(n%10!=4&&n%10!=7)
			return false;
		n/=10;
	}
	return true;
}
int t;
vi large,small;
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    t=1;
    //cin>>t;
    int m,s,d;
    while(t--){
    	cin>>m>>s;
    	if(m==1&&s==0)
    	{
    		return cout<<s<<" "<<s,0;
    	}
    	if(s==0||m*9<s){
    		return cout<<"-1 -1",0;
    	}
    	d=s;
    	fori(i,0,m){
    		large.pb(MIN(9,d));
    		d-=9;
    		if(d<0)
    			d=0;
    	}
    	d=s-1;
    	fori(i,0,m)
    	{
    		small.pb(MIN(9,d));
    		d-=9;
    		if(d<0)
    			d=0;
    	}
    	reverse(small.begin(),small.end());
    	small[0]++;
    	fori(i,0,m)
    	cout<<small[i];
    	cout<<" ";
    	fori(i,0,m)
    	cout<<large[i];
    }

	return 0;
}