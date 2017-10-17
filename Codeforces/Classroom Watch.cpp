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
int noOfDigits(ll n){
    int c=0;
    while(n>0){
        c++;
        n/=10;
    }
    return c;
}
int sumOfDigits(ll n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
void solve(){
 	ll n;
    cin>>n;
    int x=0;
    vector<ll> ans;
    int c=noOfDigits(n);
    ll a=n-9*c;
    forl(i,a,n-1){
        if(i+sumOfDigits(i)==n)
        {
            x++;
            ans.pb(i);
        }
    }
    cout<<x<<'\n';
    fori(i,0,x-1){
        cout<<ans[i]<<" ";
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