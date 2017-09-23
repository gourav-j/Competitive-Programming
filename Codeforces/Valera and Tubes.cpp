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
    //ios::sync_with_stdio(false);
    t=1;
    int n,m,k,x=1,y=1,cnt;
    //cin>>t;
   while(t--){
   		cin>>n>>m>>k;
   		fori(i,1,k){
   			cout<<"2 "<<x<<" "<<y<<" ";
   			if(y==m && x%2==1)
   				x++;
   			else if(y==1 && x%2==0)
   				x++;
   			else if(x%2==0)
   				y--;
   			else
   				y++;
   			cout<<x<<" "<<y<<'\n';
   			if(y==m && x%2==1)
   				x++;
   			else if(y==1 && x%2==0)
   				x++;
   			else if(x%2==0)
   				y--;
   			else
   				y++;
   		}
   		if(k==1)
   			cnt=n*m;
   		else 
   			cnt=n*m-2*(k-1);
   		cout<<cnt<<" ";
   		fori(i,0,cnt){
   			cout<<x<<" "<<y<<" ";
   			if(y==m && x%2==1)
   				x++;
   			else if(y==1 && x%2==0)
   				x++;
   			else if(x%2==0)
   				y--;
   			else
   				y++;
   		}
   }
	return 0;
}