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
    
    int n;
    while(t--){
    	cin>>s;
    	for(int i=0;i<s.size();i++)
    	{
    		if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='Y'||s[i]=='y')
    			continue;
    		p+='.';
    		if(isupper(s[i]))
    			p+=tolower(s[i]);
    		else
    			p+=s[i];
    	}
    	cout<<p;
    }
	return 0;
}