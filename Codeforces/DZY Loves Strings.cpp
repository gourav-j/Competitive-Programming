/******************gourav_j**************/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair

#define INF 1e18
#define MOD 1000000007

#define si(x) scanf("%d",&x)
#define slli(x) scanf("%lld",&x)
#define sli(x) scanf("%ld",&x)

#define pfi(x) printf("%d\n",x)
#define pfli(x) printf("%ld\n",x)
#define pflli(x) printf("%lld\n",x)

#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))


#define fori(i,a,b) for(int  i=(a);i<(b);i++)
#define forl(i,a,b) for(ll  i=(a);i<(b);i++)
#define rfor(i,a,b) for(int i=(b);i>=(a);i--)

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

int t;
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    t=1;
    int k,ar[26],mx=INT_MIN;
    string s;
    int ans=0;
    
    //cin>>t;
   while(t--){
    	cin>>s>>k;
    	fori(i,0,26)
    	{cin>>ar[i];mx=MAX(mx,ar[i]);}
    	fori(i,0,s.size())
    	{
    		int c=s[i]-97;
    		ans+=ar[c]*(i+1);
    	}
    	fori(i,s.size()+1,s.size()+1+k)
    		ans+=mx*i;	
    	cout<<ans;
   }
	return 0;
}