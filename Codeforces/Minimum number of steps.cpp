/******************gourav_j**************/
 /***********This code belongs to me**************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    string s;
    cin>>s;
    int n=s.size();
    ll b=0,ans=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='b')
        b=(b+1)%mod;
        if(s[i]=='a')
        {
            ans+=b;
            ans%=mod;
            b=b*2;
            b%=mod;
        }
    }
    cout<<ans<<endl;
	return 0;
}