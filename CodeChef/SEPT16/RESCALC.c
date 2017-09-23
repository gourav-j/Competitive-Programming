#include <stdio.h>
 
int main(void) {
	// your code goes here
	int t,n,max=0,j,c,i,pos,type[8],arr[1000];
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    int k=0;
	    max=0;int flag=0;
	    while(n--){
	        int score=0,count=0;
	        scanf("%d",&j);
	        for(i=0;i<=7;i++)
	        type[i]=0;
	        for(i=0;i<j;i++)
	        {
	            scanf("%d",&c);
	            type[c]++;
	        }
	        while(1)
	       {
	           count=0;
	           for(i=1;i<=6;i++)
	       {
	            if(type[i]>0)
	            {type[i]--;count++;}
	       }
	       if(count==4)
	           score+=1;
	           else if(count==5)
	           score+=2;
	           else if(count==6)
	           score+=4;
	           else if(count<=3)
	           break;
	       }
	       score+=j;
	       arr[k++]=score;
	   }
	   max=arr[0];pos=0;flag=1;
	   for(i=1;i<k;i++){
	       if(max<arr[i])
	       {
	           max=arr[i];pos=i;flag=1;
	       }
	       else if(max==arr[i]){
	           flag++;
	       }
	   }
	   if(flag>=2)
	   printf("tie\n");
	   else if(pos==0)
	   printf("chef\n");
	   else
	   printf("%d\n",pos+1);
	}
	return 0;
}
