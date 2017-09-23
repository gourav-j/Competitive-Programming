#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char x[1000],y[1000];
	int t=0,i=0,f=0;
	scanf("%d",&t);
	while(t--)
	{
	    f=0;
	    scanf("%s",x);
	    scanf("%s",y);
	    if(strlen(x)!=strlen(y))
	    printf("No\n");
	    else
	    {
	        for(i=0;x[i]!='\0';i++)
	        {
	            if(x[i]==y[i]||x[i]=='?'||y[i]=='?')
	            f=0;
	            else
	            {
	                f=1;break;
	            }
	        }
	        if(f==0)
	        printf("Yes\n");
	        else if(f==1)
	        printf("No\n");
	    }
	}
	return 0;
}
