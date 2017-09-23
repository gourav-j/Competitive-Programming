#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
    int n;
    cin>>n;
    int f=n/3;
    for(int i=0;i<f;i++){
     if(i%4==0)
     {
         cout<<"aab";
     }
     else if(i%4==1)
     cout<<"baa";
     else if(i%4==2)
     cout<<"bba";
     else if(i%4==3)
     cout<<"abb";
    }
    if(n%3==1)
    {
        if(f%4==0)
     {
         cout<<"a";
     }
     else if(f%4==1)
     cout<<"b";
     else if(f%4==2)
     cout<<"b";
     else if(f%4==3)
     cout<<"a";
    }
    if(n%3==2){
        if(f%4==0)
     {
         cout<<"aa";
     }
     else if(f%4==1)
     cout<<"ba";
     else if(f%4==2)
     cout<<"bb";
     else if(f%4==3)
     cout<<"ab";
    }
	return 0;
}