#include <bits/stdc++.h>
using namespace std;
int ar[1000005];
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,ans=0;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>ar[i];
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				
					int c=ar[i]|ar[j];
					
					if(c<=max(ar[i],ar[j]))
						ans++;
				
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}
