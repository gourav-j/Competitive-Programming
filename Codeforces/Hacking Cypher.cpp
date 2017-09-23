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
int pre[1000005],suf[1000005];
int main() {
	// your code goes here
    //ios::sync_with_stdio(false);
    t=1;
    string s;
    int a,b,f=1;

    //cin>>t;
   while(t--){
   		cin>>s>>a>>b;
   		pre[0]=(s[0]-'0')%a;
   		suf[s.size()-1]=(s[s.size()-1]-'0')%b;
   		fori(i,1,s.size()){
   			pre[i]=(pre[i-1]*10+s[i]-'0')%a;
   			f*=10;f%=b;

   			suf[s.size()-i-1]=(suf[s.size()-i]+(s[s.size()-i-1]-'0')*f)%b;
   		}
   		int flag=0,pos;

   		fori(i,0,s.size()){
   			
   			if(pre[i]==0&&suf[i+1]==0&&s[i+1]!='0'&&i<s.size()-1)
   				{flag=1;pos=i;break;}
   		}
   		if(!flag)
   			return cout<<"NO",0;
   		cout<<"YES\n";
   		fori(i,0,s.size()){
   			
   			cout<<s[i];
   			if(i==pos)
   				cout<<'\n';
   		}
   }
	return 0;
}