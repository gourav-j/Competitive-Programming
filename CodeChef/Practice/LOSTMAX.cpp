/******************gourav_j**************/
#include <bits/stdc++.h>
#define FF first
#define SS second
#define pb push_back
#define mp make_pair
#define INF 1e18
#define MOD 1000000007
#define MAXN 1000005
#define mem(a, v) memset(a, v, sizeof a)
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))
#define fori(i,a,b) for(int  i=(a);i<=(b);i++)
#define forl(i,a,b) for(ll  i=(ll)(a);i<=(ll)(b);i++)
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
void solve(){
	string s;
	vector<int> v;
	bool c=0;
	getline(cin,s);
	int x=0;
	s+=' ';
	fori(i,0,s.size()-1){
		if(s[i]==' ')
			{v.pb(x);x=0;}
		else{
			x=x*10+(s[i]-'0');
		}
	}
	int n=v.size()-1,ans=0;
	fori(i,0,v.size()-1){
		
		if(!c&&n==v[i]){
			c=1;
		}
		else{
			ans=MAX(ans,v[i]);
		}
	}
	cout<<ans<<'\n';
}
int main() {
    ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
        freopen("inp.txt","r",stdin);
        freopen("out.txt","w",stdout); 
    #endif  
    int T=1; 
   
    cin>>T;
    cin.ignore();
    while(T--){
        solve();
    }
    return 0;
}
