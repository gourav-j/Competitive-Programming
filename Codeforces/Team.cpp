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
    int n,m;
    while(t--){
    	cin>>n>>m;
        if(m>2*n+2||m<n-1)
            return cout<<"-1",0;
        if(n>m){
            cout<<0;
            n--;
        }
        while(m>n){
            if(n<=0||m<=0)
                break;
            cout<<"110";
            m-=2;n--;
        }
         while(n==m){
             if(n==0)
                break;
            cout<<"10";
            n--;m--;
        }
        while(m!=0){
            cout<<"1";
            m--;
        }
   }
	return 0;
}