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

inline ll add(ll a , ll b) { return a + b >= MOD ? a + b - MOD : a + b; }

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int t;

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    t=1;
    //cin>>t;
    string a,b,c;
  	while(t--){
      cin>>a>>b>>c;
      fori(i,0,c.size()){
        //cout<<c[i];
        if(c[i]>=65&&c[i]<=90){
          int n=c[i]-'A';
          //cout<<n;
          fori(j,0,26){
            if(n==(a[j]-'a'))
              cout<<(char)(b[j]-32);
          }
        }
        else if(c[i]>=97&&c[i]<=122)
        {
          //cout<<c[i]<<0;
          fori(j,0,26){
            if(c[i] == a[j])
              cout<<b[j];
          }
        }
        else
          cout<<c[i];
      }
  		}
	return 0;
}