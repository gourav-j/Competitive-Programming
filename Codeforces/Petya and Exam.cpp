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
char g[26];
bool match(string s,string pattern){
	//cout<<s<<pattern;
	fori(i,0,s.size()){
	//	cout<<i<<'\n';
		if(pattern[i]!='?'){
			if(pattern[i]!=s[i])
				return 0;
		}
		else{
			if(g[s[i]-'a']!=1)
				return 0;
		}
	}
	return 1;
}
bool check(string s,int starpos,int rem){
	fori(i,starpos,rem){
		//cout<<s;
		if(g[s[i]-'a']==1)
			return 0;
	}
	return 1;
}
void solve(){
	string good,pattern,s;
	int n,starpos=-1;
	cin>>good>>pattern>>n;
	fori(i,0,good.size()-1){
		g[good[i]-'a']=1;
	}
	fori(i,0,pattern.size()-1){
		if(pattern[i]=='*')
			{starpos=i;break;}
	}
	//cout<<starpos<<'\n';
	while(n--){
		cin>>s;
		if(s.size()<pattern.size()-1)
			cout<<"NO\n";
		else if(starpos==-1)
			cout<<(match(s,pattern)?"YES":"NO")<<'\n';
		else{
			bool q1=match(s.substr(0,starpos),pattern.substr(0,starpos));

			int rem=pattern.size()-1-starpos;
			reverse(s.begin(),s.end());
			reverse(pattern.begin(),pattern.end());
			bool q2=match(s.substr(0,rem),pattern.substr(0,rem));
			reverse(pattern.begin(),pattern.end());
			reverse(s.begin(), s.end());
			rem=s.size()-1-rem;
			bool q3=check(s,starpos,rem);
			//cout<<q1<<" "<<q2<<" "<<q3;
			if(q1&q2&q3)
				cout<<"YES\n";
			else
				cout<<"NO\n";
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
    //cin>>T;
    while(T--){
        solve();
    }
    return 0;
}