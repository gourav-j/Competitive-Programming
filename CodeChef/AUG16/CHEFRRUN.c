#include <stdio.h>
int main(void) {
	// your code goes here
	int t,n,count,k,j,i;
	scanf("%d",&t);
	while(t--){
	    count=0;
	    scanf("%d",&n);
	    int ar[n],visit[n];
	    for(i=0;i<n;i++){
	        scanf("%d",&ar[i]);
	        visit[i]=0;
	    }
	    for(i=0;i<n;i++){
	        j=i;k=i;
	        if(visit[i]!=1)
	        while(1){
	            visit[i]=1;
	            j=(j+ar[j]+1)%n;
	            //printf("h%d %d\n",j,i);
	            count++;
	            if(visit[j]==1)
	            break;
	            visit[j]=1;
	        }
	        //printf("%d %d\n",count,i);
	        
	        while(k!=j){
	            k=(k+ar[k]+1)%n;
	            count--;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}
