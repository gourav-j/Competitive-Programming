#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	ll a,b,q;
	cin>>q;
	while(q--){
	    cin>>a>>b;
	    
	    if(a-b==-1 && a%2!=0)
	    cout<<"YES"<<endl;
	    else if((b-a==-1&&b%2!=0))
	    cout<<"YES"<<endl;
	    else if(abs(a-b)==2)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO\n";
	     
	}
	return 0;
}
