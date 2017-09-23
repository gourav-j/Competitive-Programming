#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	// your code goes here
	int n;
	cin>>n;
	int ar[100006];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	sort(ar,ar+n);
	long c=0;
	for(int i=1;i<n-1;i++)
	
	{
		
		if(ar[i]>ar[0]&&ar[i]<ar[n-1]){
	c++;
	}}
	if(n-2>0)
	cout<<c<<endl;
	else
	cout<<"0";
	return 0;
}