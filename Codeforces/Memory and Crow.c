#include <stdio.h>
#define ll long long
int main(void) {
	// your code goes here
ll n,i,ar[100005],br[100005];
scanf("%lld",&n);
for(i=0;i<n;i++){
br[i]=0;
scanf("%lld",&ar[i]);
}
ar[n]=0;
for(i=0;i<n;i++)
{
br[i]=ar[i]+ar[i+1];}
//printf
for(i=0;i<n;i++)
printf("%lld ",br[i]);
	return 0;
}