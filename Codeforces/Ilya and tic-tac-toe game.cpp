#include <bits/stdc++.h>
using namespace std;
char ar[7][7];
int main ()
{
 
	for(int i = 0;i < 7;i++)
		for(int j = 0;j < 7;j++)
			ar[i][j] = 1;
 
 
	for(int i = 0;i < 4;i++)
		for(int j = 0;j < 4;j++)
			cin>>ar[i][j];
			
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<4;j++)
       {
           if(ar[i][j]==ar[i][j+1]&&(ar[i][j]=='x'))
           {
               if(ar[i][j+2]=='.')
               {
                   cout<<"YES\n";
                   return 0;
               }
           }
           if(ar[i][j]==ar[i][j+2]&&(ar[i][j]=='x'))
           {
               if(ar[i][j+1]=='.')
               {
                   cout<<"YES\n";
                   return 0;
               }
           }
           if(ar[i][j+1]==ar[i][j+2]&&(ar[i][j+1]=='x'))
           {
               if(ar[i][j]=='.')
               {
                   cout<<"YES\n";
                   return 0;
               }
           }
           if(ar[i][j]==ar[i+1][j]&&(ar[i][j]=='x'))
           {
               if(ar[i+2][j]=='.')
               {
                   cout<<"YES\n";
                   return 0;
               }
           }
           if(ar[i][j]==ar[i+2][j]&&(ar[i][j]=='x'))
           {
               if(ar[i+1][j]=='.')
               {
                   cout<<"YES\n";
                   return 0;
               }
           }
           if(ar[i+1][j]==ar[i+2][j]&&(ar[i+1][j]=='x'))
           {
               if(ar[i][j]=='.')
               {
                   cout<<"YES\n";
                   return 0;
               }
           }
           if(ar[i][j]==ar[i+1][j+1]&&(ar[i][j]=='x'))
           {
               if(ar[i+2][j+2]=='.')
               {
                   cout<<"YES\n";
                   return 0;
               }
           }
           if(ar[i][j]==ar[i+2][j+2]&&(ar[i][j]=='x'))
           {
               if(ar[i+1][j+1]=='.')
               {
                   cout<<"YES\n";
                   return 0;
               }
           }
           if(ar[i+1][j+1]==ar[i+2][j+2]&&(ar[i+1][j+1]=='x'))
           {
               if(ar[i][j]=='.')
               {
                   cout<<"YES\n";
                   return 0;
               }
           }
           if(j>=2){
               if(ar[i][j]==ar[i+1][j-1]&&(ar[i][j]=='x'))
           {
               if(ar[i+2][j-2]=='.')
               {
                   cout<<"YES\n";
                   return 0;
               }
           }
           if(ar[i][j]==ar[i+2][j-2]&&(ar[i][j]=='x'))
           {
               if(ar[i+1][j-1]=='.')
               {
                   cout<<"YES\n";
                   return 0;
               }
           }
           if(ar[i+1][j-1]==ar[i+2][j-2]&&(ar[i+1][j-1]=='x'))
           {
               if(ar[i][j]=='.')
               {
                   cout<<"YES\n";
                   return 0;
               }
           }
           }
           
       }
   }
   cout<<"NO\n";
return 0;
}