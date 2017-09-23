/******************gourav_j**************/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll,ll> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<ll> vl;
typedef set<ll> si;	
#define ff first
#define ss second
#define pb push_back
#define mp make_pair

#define INF 1e18
#define MOD 1000000007

#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))

#define fori(i,a,b) for(int  i=(a);i<(b);i++)
#define forl(i,a,b) for(ll  i=(a);i<(b);i++)
#define rfor(i,a,b) for(int i=(b);i>=(a);i--)

inline ll add(ll a , ll b) { return a + b >= MOD ? a + b - MOD : a + b; }

//int dx[]={1,-1,0,0};
//int dy[]={0,0,1,-1};
int t;
int main() {
	
   // ios::sync_with_stdio(false);
    t=1;
    //cin>>t;
   string s;
   int n,cnt=0;
  	while(t--){
  		cin>>n;
  		cin>>s;
  		s+='0';
  		
  		fori(i,0,n+1){
  			if(s[i]=='1')
  				cnt++;
  			else
  			{
  				cout<<cnt;
  				cnt=0;
  			}
  		}
  		
  	}
	return 0;
}