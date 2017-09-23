#include <iostream>
using namespace std;
#include<bits/stdc++.h>
void check(){
    
}
int main() {
	// your code goes here
int l=0,u=1000,x,y,z,side=0,height=0,base=0;
        string a="",b="",c="";
        while(1 ){
            y=(l+u)/2;
            cout<<"? "<<y<<" 0"<<"\n";
            fflush(stdout);
             cin>>b;
             if(b=="YES"){
                  z=y+1;
            //if(m<=10){
            cout<<"? "<<z<<" 0"<<"\n";
            fflush(stdout);
             cin>>c;
             if(c=="YES")
             l=z;
             else if(c=="NO")
             {
                  side=y;break;
             }
             }
             else if(b=="NO"){
                x=y-1;
          
            cout<<"? "<<x<<" 0"<<"\n";
            fflush(stdout);
             cin>>a;
             if(a=="YES")
             {
                 side=x;break;
             }
             else if(a=="NO")
              u=x;
             }
           
            
        
            a="";b="";c="";
        }
        side=2*side;
        l=0;u=1000;
        while(1 ){
            y=(l+u)/2;
            cout<<"? 0 "<<y<<"\n";
            fflush(stdout);
             cin>>b;
             if(b=="YES"){
                  z=y+1;
            
            cout<<"? 0 "<<z<<"\n";
            fflush(stdout);
             cin>>c;
             if(c=="YES")
             l=z;
             else if(c=="NO")
             {
                  height=y;break;
             }
             }
             else if(b=="NO"){
                x=y-1;
          
            cout<<"? 0 "<<x<<"\n";
            fflush(stdout);
             cin>>a;
             if(a=="YES")
             {
                 height=x;break;
             }
             else if(a=="NO")
              u=x;
             }
             /*
            if(a==("NO")&&b==("NO")&&c==("NO"))
            u=x;
            else if(a==("YES")&&b==("NO")&&c==("NO")){
                 height=x;break;
             }
            else if(a==("YES")&&b==("YES")&&c==("YES"))
              l=z;
            else if(a==("YES")&&b==("YES")&&c==("NO"))
            {
                height=y;break;
            }*/
            a="";b="";c="";
        }
        height=height-side;
        l=side-2;u=1000;
        
            while(1 ){
            y=(l+u)/2;
                        cout<<"? "<<y<<" "<<side<<"\n";
            fflush(stdout);
             cin>>b;
             if(b=="YES"){
                  z=y+1;
            
                         cout<<"? "<<z<<" "<<side<<"\n";
            fflush(stdout);
             cin>>c;
             if(c=="YES")
             l=z;
             else if(c=="NO")
             {
                  base=y;break;
             }
             }
             else if(b=="NO"){
                x=y-1;
         
                         cout<<"? "<<x<<" "<<side<<"\n";
            fflush(stdout);
             cin>>a;
             if(a=="YES")
             {
                 base=x;break;
             }
             else if(a=="NO")
              u=x;
             }
             /*
            if(a==("NO")&&b==("NO")&&c==("NO"))
            u=x;
            else if(a==("YES")&&b==("NO")&&c==("NO")){
                 base=x;break;
             }
            else if(a==("YES")&&b==("YES")&&c==("YES"))
              l=z;
            else if(a==("YES")&&b==("YES")&&c==("NO"))
            {
                base=y;break;
            }*/
            a="";b="";c="";
        }
        base=2*base;
        int ans=(side*side)+(base*height)/2;
        cout<<"! "<<ans;
		return 0;
}
