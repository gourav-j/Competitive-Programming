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
ll leftDiag[4008];ll rightDiag[4008];ll ar[2005][2005];
int main() {
	// your code goes here
	
    ios::sync_with_stdio(false);
    t=1;
    ll n,x1=0,x2=0,y1=0,y2=1,eveMax,oddMax;
    //cin>>t;
    
  	while(t--){
  		cin>>n;
  		fori(i,0,n){
  			fori(j,0,n){
  				cin>>ar[i][j];
  				leftDiag[i+j]+=ar[i][j];
  				rightDiag[n+i-j]+=ar[i][j];
  			}
  		}

  		eveMax=0;oddMax=0;

  		fori(i,0,n){
  			fori(j,0,n){
  				if((i+j)%2)
  				{
  					if(leftDiag[i+j]+rightDiag[n+i-j]-ar[i][j]>oddMax){
  						oddMax=leftDiag[i+j]+rightDiag[n+i-j]-ar[i][j];x1=i;y1=j;
  					}
  				}
  				else
  				{
  					if(leftDiag[i+j]+rightDiag[n+i-j]-ar[i][j]>eveMax){
  						eveMax=leftDiag[i+j]+rightDiag[n+i-j]-ar[i][j];x2=i;y2=j;
  					}
  				}
  				//cout<<eveMax<<" "<<oddMax<<endl;
  			}
  		}
  		cout<<oddMax+eveMax<<'\n';
  		cout<<x1+1<<" "<<y1+1<<" "<<x2+1<<" "<<y2+1;
  	}
	return 0;
}