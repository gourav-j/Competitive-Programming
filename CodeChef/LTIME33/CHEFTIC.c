#include <stdio.h>
int main(void) {
	// your code goes here
	int t,n,k,c=0,i,j,d=0,f=0,e=0,g=0,x=0,y=0,s=0,q=0;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d",&n,&k);
	    char ar[n][n];
	    for(i=0;i<n;i++)
	    scanf("%s",&ar[i]);
	   	if(k==1)
	    {
	        printf("YES\n");
	        continue;
	    }
	    g=0;e=0;f=0;x=0;y=0;
	    for(i=0;i<n;i++)
	    {
	        c=0;d=0;s=0;q=0;
	        for(j=0;j<n;j++)
	        {
	            if(ar[j][i]=='X')
	                s++;
	            else if(ar[j][i]=='.')
	               {s++;q++;}
	                else if(q>1)
	            {s=0;q=0;}
	            else
	            {s=0;q=0;}
	            if(ar[i][j]=='X')
	                c++;
	            else if(ar[i][j]=='.')
	                {c++;d++;}
	                else if(d>1)
	            {c=0;d=0;}
	            else
	            {c=0;d=0;}
	            if(ar[i][j]=='X'&&i==j)
	                e++;
	            else if(ar[i][j]=='.'&&f==0&&i==j)
	                {e++;f=1;}
	                else if(i==j&&ar[i][j]=='O')
	            {e=0;f=0;}
	            if(ar[i][j]=='X'&&i+j==n-1)
	                x++;
	            else if(ar[i][j]=='.'&&y==0&&i+j==n-1)
	                {x++;y=1;}
	                else if(i+j==n-1&&ar[i][j]=='O')
	            {x=0;y=0;}
	            if((c==k&&d==1)||(e==k&&f==1)||(x==k&&y==1)||(s==k&&q==1))
	        {printf("YES\n");g=1;break;}
	        }
	        if(g==1)
	        break;
	    }
	    if(g==0)
	    printf("NO\n");
	}
	return 0;
}
