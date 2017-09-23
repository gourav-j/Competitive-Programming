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
string s;
int m;
vector <int> res;
bool dfs(int balance,int last,int steps){
	if(steps>m)
		return 1;
	fori(i,1,11){
		bool x=0;
		if(last!=i&&s[i]=='1'&&balance+i>0&&(steps&1))
			x=dfs(balance+i,i,steps+1);
		else if(last!=i&&s[i]=='1'&&balance-i<0&&!(steps&1))
			x=dfs(balance-i,i,steps+1);
		if(x){
		res.pb(i);
		return 1;}
	}
	return 0;
}
void solve(){
	cin>>s>>m;
	s='0'+s;
	bool c=dfs(0,0,1);
	if(c){
		cout<<"YES\n";
		reverse(res.begin(), res.end());
		fori(i,0,res.size()-1)
		cout<<res[i]<<" ";
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
    //cin>>T;
    while(T--){
        solve();
    }
    return 0;
}