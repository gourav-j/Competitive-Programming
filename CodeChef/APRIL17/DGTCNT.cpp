/******************gourav_j**************/
 /***********This code belongs to me**************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ar[10];
bool check(ll n){
    int has[10],r;
    memset(has,0,sizeof has[0]*10);
    while(n>0){
        r=n%10;
        n=n/10;
        has[r]++;
    }
    for(int i=00;i<10;i++)
        if(ar[i]==has[i])
        return false;
    return true;
}
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    int t;
    ll l,r;
    scanf("%d",&t);
    while(t--){
        ll ans=0;
        scanf("%lld%lld",&l,&r);
        for(int i=0;i<10;i++)
        scanf("%d",&ar[i]);
        for(ll i=l;i<=r;i++)
        {
            if(check(i))
            ans++;
        }
        cout<<ans<<'\n';
    }
	return 0;
}
