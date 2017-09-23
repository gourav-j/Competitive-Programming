/******************gourav_j**************/
 /***********This code belongs to me**************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        long long one=0;
        int n=s.size();long long k=0,ans=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                if(i+1<n&&s[i+1]=='0')
                one++;
                k++;
                ans+=one+(n-k)-i;
                //cout<<ans<<" ";
            }
        }
        cout<<ans<<'\n';
    }
	return 0;
}
