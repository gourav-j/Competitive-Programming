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
int solve(){
 	int n,x;
 	cin>>n>>x;
 	if(n==1)
 		cout<<"YES\n"<<x;
 	else if(n==2 && x==0)
 		cout<<"NO\n";
 	else if(n==2)
 		cout<<"YES\n0 "<<x;
 	else{
 		int y=0;
 		int p=pow(2,18);
 		cout<<"YES\n";
 		fori(i,1,n-3)
 		{
 			y^=i;
 			cout<<i<<" ";
 		}
 		if(x==y){
 			cout<<p<<" "<<p*2<<" "<<(p^(p*2));
 		}else{
 			cout<<0<<" "<<p<<" "<<((p^x)^y);
 		}

 	}
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