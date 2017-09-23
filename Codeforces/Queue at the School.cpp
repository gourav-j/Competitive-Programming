/******************gourav_j**************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

 

int t;
string s;
int n,p,ar[100],x=0,br[100];
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    t=1;
   // cin>>t;
    
    
    while(t--){
    	cin>>n>>p;
    	cin>>s;
    	char temp;
    	for(int i=0;i<p;i++){
    		int j=0;
    		while(j<n){
    			if(s[j]=='B'&&s[j+1]=='G'){
    				temp=s[j];
    				s[j]=s[j+1];
    				s[j+1]=temp;
    				j=j+2;
    			}
    			else
    				j++;
    		}
    	}
    	cout<<s;
    }

	return 0;
}