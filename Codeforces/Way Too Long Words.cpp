/******************gourav_j**************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 

int t;
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    t=1;
    cin>>t;
    string s;
    int n;
    while(t--){
    	cin>>s;
    	if(s.size()<=10)
    		cout<<s<<'\n';
    	else
    		cout<<s[0]<<s.size()-2<<s[s.size()-1]<<'\n';
    }
	return 0;
}