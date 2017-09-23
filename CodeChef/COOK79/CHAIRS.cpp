#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define max 10000007
int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[1000005];
		int k=0;
		int ans[1000005];
		int last=-1;
		int j=0;
		string s;
		cin>>s;
		for(int i=0;i<n;i++){
			a[i]=s[i]-'0';
			if(a[i]==1){
				k++;
				last=i;
			}
			//cout<<a[i]<<" ";
		}
		if(k==1||k==0){
			cout<<0<<endl;
			continue;
		}
		int f=0;
		for(int i=0;i<n;i++){
			if(a[i]==1){
				if(f==0){
					ans[j++]=(last-i+1);
					f++;
					last=i;
				}
				else{
					ans[j++]=(n-i+last+1);
					last=i;
				}
			}
		}
		ll min=max;
		for(int i=0;i<j;i++){
		    //cout<<ans[i]<<" ";
			if(ans[i]-k<min){
				min=ans[i]-k;
			}
		}
		cout<<min<<endl;
	}
    return 0;
}
