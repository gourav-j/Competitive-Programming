#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n;
	cin>>n;
    if(n%2==0){
        int c=(n/2);
        cout<<c<<endl;
        for(int i=0;i<c;i++)
            cout<<"2 ";
    }
    else
    {
        int k=(n/2);
        cout<<k<<endl;
        for(int i=1;i<k;i++)
            cout<<"2 ";
        cout<<"3 ";
    }
    return 0;
    }