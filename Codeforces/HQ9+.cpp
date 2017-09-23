/******************gourav_j**************/
#include <iostream>
#include<bits/stdc++.h>
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

int t;  
ll ar[3];
int main() {
	// your code goes here
    //ios::sync_with_stdio(false);
    t=1;
    //cin>>t;
    string s;
    while(t--){
    	cin>>s;
    	fori(i,0,s.size()){
    		if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
    			return cout<<"YES",0;
    	}
    	cout<<"NO";
   }
	return 0;
}