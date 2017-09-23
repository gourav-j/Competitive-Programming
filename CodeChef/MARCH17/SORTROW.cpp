/******************gourav_j**************/
 /***********This code belongs to me**************/
 
#include <bits/stdc++.h>
using namespace std;
bool check(int ar[],int temp1[],int temp2[],int n){
    int c=0,d=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(temp1[i]==ar[j]){
                c+=(j-i)*(j-i);
            }
            if(temp2[i]==ar[j])
            {
                d+=(j-i)*(j-i);
            }
        }
    }
    if(c<=d)
    return true;
    return false;
}
int main() {
	// your code goes here
	int n;
	cin>>n;int ar[n][n];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>ar[i][j];
	int temp1[n],temp2[n];
	for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            temp1[j]=ar[i][j];
            temp2[j]=ar[i][j];
        }
        sort(temp1,temp1+n);
        sort(temp2, temp2+n, greater<int>());
        if(check(ar[i],temp1,temp2,n))
        sort(ar[i],ar[i]+n);
        else
        sort(ar[i], ar[i]+n, greater<int>());
    }
    for(int i=0;i<n;i++){
	for(int j=0;j<n;j++)
	cout<<ar[i][j]<<' ';
	cout<<'\n';}
	return 0;
}
