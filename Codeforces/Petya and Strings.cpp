/******************gourav_j**************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 

int t;
string s,p;
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    t=1;
   // cin>>t;
    
    while(t--){
    	cin>>s>>p;
    	
    	for(int i=0;i<s.size();i++){
    		if(tolower(s[i])<tolower(p[i]))
    			return cout<<-1,0;
    		else if(tolower(s[i])>tolower(p[i]))
    			return cout<<1,0;
    	}
    	cout<<0;
    }

	return 0;
}