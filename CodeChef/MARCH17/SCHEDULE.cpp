/*********************gourav_j***********************/
#include <bits/stdc++.h>
using namespace std;
/*******From Geeks for Geeks***********/
char f(char ch)
{
    return (ch == '0') ? '1' : '0';
}
 
int flip(string str,char expected)
{
    int flipCount = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != expected)
            flipCount++;
 
        expected = f(expected);
    }
    return flipCount;
}
int main() {
    ios::sync_with_stdio(false);
    int t,n,k;
    cin>>t;
    string s;
    while(t--){
        cin>>n>>k;
        cin>>s;
        if(k>=n/2)
        {
            cout<<"1\n";
            continue;
        }
        int c=1;
        
        int mx=0;
        map <int,int> ar;
        int f=0;
        for(int i=0;i<n-1;i++){
            
            if(s[i] == s[i+1])
            c++;
            else{
                if(c>=2)
                ar[f++]=c;
                mx=max(mx,c);
                c=1;
            }
        }
        
        if(c>=2)
        ar[f++]=c;
        mx=max(mx,c);
        int ans=0;
        
        if(mx==1){
            cout<<1<<'\n';
            //ar.clear();
            continue;
        }
        
        if(k==0)
        {
            cout<<mx<<'\n';
            //ar.clear();
            continue;
        }
        
        ans=min(flip(s, '0'),flip(s, '1'));
        
        if(ans<=k){
            cout<<1<<'\n';
            //ar.clear();
            continue;
        }
        
        int i;
        for( i=2;i<=mx;i++){
            int sum=0;
            for(int j=0;j<f;j++){
                
                sum+=ar[j]/(i+1);
            }
            if(sum<=k)
            break;
        }
        cout<<i<<'\n';
    }
	return 0;
}
