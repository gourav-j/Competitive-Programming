#include <iostream>
using namespace std;
#include<bits/stdc++.h>
void printPowerSet(int *set, int set_size)
{
	/*set_size of power set of a set with set_size
	n is (2**n -1)*/
	unsigned int pow_set_size = pow(2, set_size);
	int counter, j;
    int cnt=0;
	/*Run from counter 000..0 to 111..1*/
	for(counter = 0; counter < pow_set_size; counter++)
	{
	    long long sum=0;int flag=0;
	for(j = 0; j < set_size; j++)
	{
		/* Check if jth bit in the counter is set
			If set then pront jth element from set */
		if(counter & (1<<j))
			{flag=1;sum=sum+set[j];//cout<<set[j]<<" ";
	}
	//cout<<sum<<endl;
	if(sum==0 &&flag==1)
	cnt++;
	}}
	if(cnt>0)
	cout<<"Yes\n";
	else
	cout<<"No\n";
}
int main() {
	// your code goes here
	int t,a[4];
	cin>>t;
	while(t--){
	    cin>>a[0]>>a[1]>>a[2]>>a[3];
	    printPowerSet(a,4);
	}
	
	return 0;
}
