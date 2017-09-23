#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
	ll n,a,b,c;
	cin>>n>>a>>b>>c;
	if(n%4==0){
	cout<<"0\n";
	return 0;}
	ll p=4-n%4;
	if(p==1)
	{ll min;
	if(a<b+c)
	min=a;
	else
	min=b+c;
	if(min>3*c)
	min=3*c;
	cout<<min<<endl;
	}
	if(p==2){
		ll min;
		if(2*a<b)
		min=2*a;
		else
		min=b;
		if(min<2*c)
		cout<<min<<endl;
		else
		cout<<2*c<<endl;
	}
	if(p==3){
		ll min;
		if(3*a<b+a)
		min=3*a;
		else
		min=b+a;
		if(min<c)
		cout<<min<<endl;
		else
		cout<<c<<endl;
	}
	return 0;
}