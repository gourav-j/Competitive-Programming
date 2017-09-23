/******************gourav_j**************/
#include <bits/stdc++.h>
#define FF first
#define SS second
#define pb push_back
#define mp make_pair
#define INF 1e18
#define MOD 1000000007
#define MAXN 100005
#define mem(a, v) memset(a, v, sizeof a)
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))
#define fori(i,a,b) for(int  i=(a);i<=(b);i++)
#define forl(i,a,b) for(ll  i=(a);i<=(b);i++)
#define rfor(i,a,b) for(int i=(b);i>=(a);i--)
#define forit(i, a) for ( __typeof( (a).begin() ) i = (a).begin(); i != (a).end(); i++ )
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> ii;
typedef vector<ii> vii;
typedef map<string,ll> msi;
typedef set<ll> si;
				/***********code begins here***********/
int checkPal(ll n){
	ll r,s=0,x=n;
	while(n>0){
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(s==x)
		return 1;
	return 0;
}
ll removeZero(ll n){
	int r;
	while(1){
		r=n%10;
		if(r!=0)
			return n;
		n/=10;
	}
	return n;
}
void solve(){
 	ll n;
 	cin>>n;
 	n=removeZero(n);
 	int f=checkPal(n);
 	if(f){
 		cout<<"YES";
 	}
 	else
 		cout<<"NO";
}
int main() {
    ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
        freopen("inp.txt","r",stdin);
        freopen("out.txt","w",stdout); 
    #endif  
    int T=1; 
   // cin>>T;
    while(T--){

        solve();
    }
    return 0;
}