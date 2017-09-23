#include<stdio.h>
#define max(a,b) a>b?a:b
 
int main(){
	int tc,T;
	scanf("%d",&T);
	for(tc=0;tc<T;tc++){
		int n,k;
		int i;
		int rem=0;
		scanf("%d%d",&n,&k);
		for(i=1;i<=k;i++){
			rem=max(rem,n%i);
		}
 
		printf("%d\n",rem);
	}
	return 0;
}
