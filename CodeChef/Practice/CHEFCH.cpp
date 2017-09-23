#include <bits/stdc++.h>
using namespace std;
char f(char ch)
{
    return (ch == '+') ? '-' : '+';
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
        
        cin>>s;
        int ans=min(flip(s,'+'),flip(s,'-'));
        cout<<ans<<'\n';
    }
    return 0;
}
