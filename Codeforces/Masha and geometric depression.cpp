/******************gourav_j**************/
 /***********This code belongs to me**************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool binarySearch(ll ar[],ll n,ll x){
    ll l=0,u=n,m=0;
    while(l<=u){
        m=(l+u)/2;
        if(x>ar[m])
        l=m+1;
        else if(x<ar[m])
        u=m-1;
        else if(x==ar[m])
        return true;
    }
    return false;
}
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    ll b,q,l,m;
    cin>>b>>q>>l>>m;
    ll ar[m];
    for(int i=0;i<m;i++)
    cin>>ar[i];
    sort(ar,ar+m);
    if(abs(b)>l)
    {
        cout<<0;
        return 0;
    }
    
    if(b==0){
        if(binarySearch(ar,m,0))
        {
            cout<<0;
        }
        else
        cout<<"inf";
        return 0;
    }
    
    if(q==1){
        if(binarySearch(ar,m,b))
        cout<<0;
        else
        cout<<"inf";
        return 0;
    }
    
    if(q==-1){
        if(binarySearch(ar,m,b)&&binarySearch(ar,m,-b))
        cout<<0;
        else
        cout<<"inf";
        return 0;
    }
    
    if(q==0)
    {
        if(!binarySearch(ar,m,0))
        cout<<"inf";
        else if(binarySearch(ar,m,b))
        cout<<0;
        else
        cout<<1;
        return 0;
    }
    ll c=0;
    while(abs(b)<=l){
        if(!binarySearch(ar,m,b))
        c++;
        b=b*q;
    }
    cout<<c;
	return 0;
}