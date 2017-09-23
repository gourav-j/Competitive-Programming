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
    int n,ar[105];
  	while(t--){
  		cin>>n;
      fori(i,0,n)
      cin>>ar[i];
      int flag=0;
      fori(i,0,n-1)
      {

        if(flag==0)
        {if(ar[i]>ar[i+1])
          flag=2;
          if(ar[i]==ar[i+1])
            flag=1;}
          else if(flag==1){
            if(ar[i]>ar[i+1])
              flag=2;
            if(ar[i]<ar[i+1])
              return cout<<"NO",0;
          }
        else if(flag==2)
          if(ar[i]<=ar[i+1])
            return cout<<"NO",0;
      }
      cout<<"YES";
  	}
	return 0;
}