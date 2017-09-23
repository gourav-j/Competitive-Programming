#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
	// your code goes here
	long ar[100005],x,y,z,n;int flag=0;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>ar[i];
	sort(ar,ar+n);
	for(int i=0;i<n-2;i++){
	    
	    x=ar[i];y=ar[i+1];
	    z=ar[i+2];
	    //cout<<a<<b<<c<<endl;
	    if(x<y+z&&y<x+z&&z<y+x)
	    {
	        flag=1;break;
	    }
	}
	if(flag==0)
	cout<<"NO\n";
	else
	cout<<"YES\n";
	return 0;
}