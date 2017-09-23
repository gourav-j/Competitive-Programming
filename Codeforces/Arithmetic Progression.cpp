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
map<int,int> s;
int main() {
	// your code goes here
	
    ios::sync_with_stdio(false);
    t=1;
    map<int,int>::iterator it;
    int n,ar[100005],d;
    //cin>>t;
    
  	while(t--){
  		cin>>n;
  		fori(i,0,n){
  			cin>>ar[i];
  		}
  		sort(ar,ar+n);
  		if(n==1)
  			return cout<<"-1",0;
  		if(ar[0]==ar[n-1])
  			return cout<<"1\n"<<ar[0],0;
  		else if(n==2)
  		{
  			if((ar[0]+ar[1])%2==0)
  			{	
  				cout<<"3\n";
  				cout<<ar[0]*2-ar[1]<<" ";
  				cout<<(ar[0]+ar[1])/2<<" ";
  				cout<<ar[1]*2-ar[0]<<" ";
  				return 0;
  			}
  			cout<<"2\n";
  			cout<<ar[0]*2-ar[1]<<" ";
  			cout<<ar[1]*2-ar[0]<<" ";
  			return 0;
  		}
  		
  		fori(i,1,n){
  			s[ar[i]-ar[i-1]]++;
  		}
  		
  		if(s.size()>2)
  			return cout<<0,0;
  		
  		if(s.size()==1)
  			return cout<<"2\n"<<2*ar[0]-ar[1]<<" "<<2*ar[n-1]-ar[n-2],0;
  		it=s.begin();
  		if(it->second<n-2)
  			return cout<<0,0;
  		int cd1=it->first;
  		it++;
  		int cd2=it->first;
  		if(cd2!=2*cd1)
  			return cout<<0,0;
  		if(s.size()==2){
  			cout<<"1\n";
  			fori(i,1,n){
  				if(ar[i]-ar[i-1]==cd2)
  					cout<<ar[i]-cd1;
  			}
  		}
  	}
	return 0;
}