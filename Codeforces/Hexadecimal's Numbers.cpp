/******************gourav_j**************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int ans=0;int t,n;
void solve(int a){
if(a<=n)ans++;
else
return;
solve(a*10+1);
solve(a*10);
}

int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    t=1;
    //cin>>t;
    
    while(t--){
    	cin>>n;
    	solve(1);
    	cout<<ans;
    }
	return 0;
}