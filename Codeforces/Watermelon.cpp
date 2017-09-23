/******************gourav_j**************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 

int t;
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    t=1;
    //cin>>t;
    int n;
    
    while(t--){
    	int n;
    	cin>>n;
    	if(n<=2||n%2!=0)
    		cout<<"NO";
    	else if(n%2==0)
    		cout<<"YES";
    }
	return 0;
}