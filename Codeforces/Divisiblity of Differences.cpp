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

void solve(){
 	int n,k,m;
    ll ar[100005];
    cin>>n>>k>>m;
    int cnt[100005];
    mem(cnt,0);
    fori(i,0,n-1){
        cin>>ar[i];
        cnt[ar[i]%m]++;
    }
    int ans=-1;
    //cout<<cnt[0];
    fori(i,0,m-1){
        if(cnt[i]>=k){
            ans=i;break;
        }
    }
    if(ans==-1)
    {
        cout<<"No";
        return;
    }
    cout<<"Yes\n";
    int x=0;
    fori(i,0,n-1){
        if(ar[i]%m==ans){
            cout<<ar[i]<<" ";x++;
        }
        if(x==k)
            break;
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