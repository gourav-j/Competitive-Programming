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

    int main()
{
	int n , a[105]; 
	scanf("%d" , &n ); 
	for (int i = 0; i<n; i++) scanf("%d" , &a[i] ); 
	int g , h; 
	g = 0; h = n-1; 
	for (int i = 1; i<n; i++)
		if ( a[i] <= a[g] ) g = i; 
	for (int i = n-2; i>=0; i--)
		if ( a[i] >= a[h] ) h = i; 
	int ans = n-1-g + h; 
	if ( g<h ) ans --; 
	if ( n == 1 ) printf("0\n"); 
	else printf("%d\n" , ans ); 
	return 0; 
}