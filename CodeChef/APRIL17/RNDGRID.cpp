/******************gourav_j**************/
 /***********This code belongs to me**************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    int t,n,l;
    string s;
    cin>>t;
    char ar[1005][1005];
    while(t--){
        cin>>l>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            cin>>ar[i][j];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int y=i,x=j,f=0;
                if(ar[i][j]=='#')
                {continue;}
                for(int k=0;k<l;k++)
                {
                    char c=s[k];
                    if(c=='D')
                    y++;
                    if(c=='U')
                    y--;
                    if(c=='L')
                    x--;
                    if(c=='R')
                    x++;
                    //cout<<x<<" "<<y<<"\n";
                    if(x<n&&y<n&&ar[y][x]!='#'&&x>=0&&y>=0)
                    f++;
                    else{
                        
                  //  cout<<ar[0][3];
                    break;}
                }
                //cout<<f<<"\n";
                ans=ans ^ f;
            }
        }
        cout<<ans<<'\n';
    }
	return 0;
}
