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

int count(int *ar,int *br,int *sum,int l,int n){
	if(l==n)
		return ar[l];
	if(br[l]!=-1)
		return br[l];
	else
	{
		return br[l]=max(ar[l]+sum[l+1]-count(ar,br,sum,l+1,n),count(ar,br,sum,l+1,n));
	}
}
int solve(){
 	int n;
 	int ar[55],br[55],sum[55];
 	cin>>n;
 	mem(br,-1);
 	fori(i,1,n)
 	{cin>>ar[i];

 		sum[i]=ar[i];}
 		rfor(i,1,n-1){
 			sum[i]=sum[i+1]+ar[i];
 			//cout<<sum[i]<<endl;
 		}
 		int bob=0,alice=0;
 		bob=count(ar,br,sum,1,n);
 		alice=sum[1]-bob;
 		cout<<alice<<" "<<bob;
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