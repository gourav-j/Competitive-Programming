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

typedef pair<ll,ll> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<ll> vl;
typedef set<ll> si;

inline ll mult(int a , int b) { ll x = a; x *= ll(b); if(x >= MOD) x %= MOD; return x; }
inline ll add(int a , int b) { return a + b >= MOD ? a + b - MOD : a + b; }
inline ll sub(int a , int b) { return a - b < 0 ? MOD - b + a : a - b; }
ll powmod(ll a,ll b) { if(b==0)return 1; ll x=powmod(a,b/2); ll y=(x*x)%MOD; if(b%2) return (a*y)%MOD; return y%MOD; }
ll power(ll a,ll b) { if(b==0)return 1; ll x=power(a,b/2); ll y=(x*x); if(b%2) return (a*y); return y; }

/*Inverse Euler*/
ll InverseEuler(ll n)
{
    return powmod(n,MOD-2);
}
/*gcd*/
ll gcd(ll a, ll b){ if(b)return gcd(b,a%b); return a;}

int t; 
int main() {
	// your code goes here
    //ios::sync_with_stdio(false);
    t=1;
    //cin>>t;
    int n,flag=0;ll ar[100005];
    while(t--){
    	cin>>n;
        int start=-1,end=-1;
        fori(i,1,n+1)
        cin>>ar[i];
        fori(i,2,n+1){
            if(ar[i]<ar[i-1])
            {
                start=i-1;break;
            }
        }
        
        rfor(i,1,n-1){
            
            if(ar[i]>ar[i+1])
            {
                end=i+1;
                break;
            }
        }
        
        if(start==-1 || end==-1)
            return cout<<"yes\n1 1",0;
        int j=end;
        fori(i,start,j+1){
            swap(ar[i],ar[j]);
            j--;
        }
        
        fori(i,2,n+1){
            if(ar[i]<ar[i-1])
                flag=1;
        }
        if(flag)
            cout<<"no";
        else
            cout<<"yes\n"<<start<<" "<< end;
   }
	return 0;
}