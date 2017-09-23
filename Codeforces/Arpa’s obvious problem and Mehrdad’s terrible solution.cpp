#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d",&x)
typedef long long ll;
ll hs[1000010];
int main()
{	//ios::sync_with_stdio(0);
	int i,j,n,x;
	sc(n);sc(x);
	ll ans=0;
	for (i=1;i<=n;i++)
	{
		int d;	
		sc(d);
		ans+=hs[d^x];
		hs[d]++;
	}
	printf("%lld\n",ans);
		

	return 0;

}