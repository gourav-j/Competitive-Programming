#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	// your code goes here
	long long t,n,a[300005];
	cin>>t;
	while(t--){
	    int flag=0,i;
	    cin>>n;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    for(i=0;i<n-1;i++){
	        if(abs(a[i]-a[i+1])>1){
	        cout<<"NO\n";flag=1;break;}
	    }
	    if(flag==0)
	    cout<<"YES\n";
	}
	return 0;
}
