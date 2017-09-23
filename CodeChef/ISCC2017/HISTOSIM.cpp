/******************gourav_j**************/
#include <bits/stdc++.h>
#define FF first
#define SS second
#define pb push_back
#define mp make_pair
#define INF 1e18
#define MOD 1000000007
#define MAXN 55
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
int ar[26];
int solve(){
	string p,q;
	map<char,char> mymap;
	map<char,char>::iterator it;
	cin>>p>>q;
	bool flag=false;
	if(p==q)
	{
		cout<<"YES\n";
		return 0;
	}
	fori(i,0,p.size()-1){
		ar[(p[i]-'a')]=1;
	}
	fori(i,0,25){
		if(ar[i]==0)
			flag=true;
	}
	if(!flag)
		return cout<<"NO\n",0;
	mem(ar,0);
	fori(i,0,p.size()-1){
		it = mymap.find(q[i]);
		if(p[i]!=q[i])
		{	if(ar[q[i]-'a']==1&&it->SS!=p[i])
			return cout<<"NO\n",0;
			else if(ar[q[i]-'a']==0)
				{ar[q[i]-'a']=1;mymap.insert(pair<char,char>(q[i],p[i]));}
		}
	}
	mymap.clear();
	mem(ar,0);
	fori(i,0,p.size()-1){
		it = mymap.find(p[i]);
		if(it->SS!='\0'&&it->SS!=q[i])
			return cout<<"NO\n",0;
		mymap.insert(pair<char,char>(p[i],q[i]));
		
	}
	cout<<"YES\n";
	return 0;
}
int main() {
    ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
        freopen("inp.txt","r",stdin);
        freopen("out.txt","w",stdout); 
    #endif  
    int T=1; 
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
