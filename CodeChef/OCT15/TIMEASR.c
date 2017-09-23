#include <stdio.h>
#include<stdlib.h>
int main(void) {
	// your code goes here
	int t,h,m;
	float d=0,a=0,x=0,ma=0,ha=0,y=0;
	scanf("%d",&t);
	while(t--)
	{
	   h=0;m=0;d=0;ma=0;ha=0;
	   y=0;
	   scanf("%f",&a);
	   while(h!=12)
	   {
	       if(d>a)
	       x=d-a;
	       else
	       x=a-d;
	       if(x<1.0/120.0)
	       {
	          // printf("%f   ",a);
	           if(h<10&&m<10)
	           printf("0%d:0%d\n",h,m);
	           else if(h<10)
	           printf("0%d:%d\n",h,m);
	           else if(m<10)
                printf("%d:0%d\n",h,m);
                else
	           printf("%d:%d\n",h,m);
	       }
	       m++;
	       ma+=6;
	       ha+=0.5;
	       if(ma==360)
	       {
	           h=h+1;
	           ma=0;
	           m=0;
	       }
	       if(ha>ma)
	       d=ha-ma;
	       else
	       d=ma-ha;
	       y=360-d;
	       if(y<d)
	       d=y;
	       
	   }
	}
	return 0;
}
