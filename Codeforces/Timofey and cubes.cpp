#include <iostream>

using namespace std;
 
int main() 
{
	int i,j,ar[200005],temp,n;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>ar[i];
		j=n-1;
	for(i=0;i<=j;i++,j--)
	{
		if(i%2==0)
		{
			temp=ar[j];
			ar[j]=ar[i];
			ar[i]=temp;
		}
	}
	for(i=0;i<n;i++)
	cout<<ar[i]<<" ";
	return 0;
}