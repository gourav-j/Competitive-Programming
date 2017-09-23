/******************gourav_j**************/
 /***********This code belongs to me**************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    int n,k,t,a,x;
    int ar[100005];
    cin>>t;
    while(t--){
        cin>>n>>k;
        int flag=0;
        memset(ar,0,sizeof ar[0]*100005);
        while(n--){
            cin>>a;
            int ff=0;
            for(int i=0;i<a;i++)
            {
                cin>>x;
                if(ar[x]==0)
                ff=1;
                ar[x]++;
            }
            if(ff==0)
            flag=2;
        }
        for(int i=1;i<=k;i++){
            if(ar[i]==0)
            {flag=1;break;}
            
        }
        if(flag==1)
        cout<<"sad\n";
        else if(flag==2)
        cout<<"some\n";
        else
        cout<<"all\n";
    }
	return 0;
}
