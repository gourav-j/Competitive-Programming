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
int main() {
	// your code goes here
    //ios::sync_with_stdio(false);
    t=1;
    //cin>>t;
    int k=-1;
    string s;
    while(t--){
    	cin>>s;
    	fori(i,0,s.size()){
    		if((s[i]-'0')%2==0)
    			{
    				k=i;
    				if(s[i]<s[s.size()-1])
    					break;
    			}
    	}
    	if(k!=-1)
    	{swap(s[k],s[s.size()-1]);
    		cout<<s;}
    		else
    			cout<<-1;
   }
	return 0;
}