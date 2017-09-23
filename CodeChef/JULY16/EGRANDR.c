#include<stdio.h>
int main(){
	int t,n,a;
	scanf("%d",&t);
	while(t--){
		int i,fail=0,pass=0;float sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a);
			if(a==2)
				{fail=1;}
			if(a==5)
			pass=1;
			sum=sum+a;
		}
		sum=sum/n;
		if(sum>=4&&pass==1&&fail==0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
