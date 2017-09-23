/******************gourav_j**************/
 /***********This code belongs to me**************/
#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > ar(5,vector<int>(5,0)),cop(5,vector<int>(5,0));
int g[100005];
int ans[100005];
vector<int> v;
bool zero(int a,int b,int c,int d)
{
  for (int i = a; i<=c ; i++)
    for (int j = b; j<=d ; j++)
         if(ar[i][j]==0)
         return 0;
  return 1;
}
int ff(){
  int z=0;
  for (int i = 1; i < 5 ; i++)
    for (int j = 1; j < 5; j++)
      z= (z*2)+ar[i][j];
      
  cop = ar;
  set<long long> s;
  if(g[z]!=-1) 
    return g[z];
  
  for (int i = 1; i < 5 ; i++)
  {
    for (int j = 1; j < 5; j++)
    {
      for (int k = i; k < 5; k++)
      {
        for (int l = j; l < 5; l++)
        {
          if(zero(i,j,k,l)){
            for (int a = i; a <=k; a++)
            {
                for (int b = j; b <=l; b++)
                {
                  ar[a][b]=0;
                }
            }
            s.insert(ff());
            for (int a = i; a <=k; a++)
            {
                for (int b = j; b <=l; b++)
                {
                  ar[a][b]=1;
                }
            }
          }
        }
      }
    }
  }
  int i=0;
  while(s.count(i)) {
      i++;
  }
  return g[z]=i;
}
 
void f(){
  int li=65535;
  memset(g,-1,sizeof(g));
  g[0]= 0;
  for (int i = 1; i <=li; i++)
  {
     if(g[i]==-1){
       v.clear();
       for (int j = 15; j >=0; j--)
       {
         v.push_back((i>>j)&1);
       }
       int f=0;
       for (int i = 1; i < 5 ; i++)
        {
          for (int j = 1; j < 5; j++)
          {
            ar[i][j]=v[f++];
          }
        }
        ff();
     }
  }
}
int value(){
  int z=0;
  for (int i = 1; i < 5 ; i++)
    for (int j = 1; j < 5; j++)
      z= (z*2)+ar[i][j];
  return z;
}
int main(){
  
ios_base::sync_with_stdio(0);
int t,n,m,l,r,pos,temp,z=0;
    f();
    cin>>t;
    while(t--) {
        cin>>n>>m;
        char ch;
        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j < 5; j++)
            {
              for (int k = 1; k < 5; k++)
              {
                 cin>>ch;
                 ar[j][k]= (int)(ch-'0');
 
              }
            }
            ans[i]=g[value()];
        }
        while(m--) {
            cin>>temp;
            if(temp==1){
              cin>>l>>r;
              z=0;
              for (int i = l; i <=r ; ++i)
              {
                z= z^ans[i];
              }
              if(z==0){
                cout<<"Lotsy\n";
              }else{
                cout<<"Pishty\n";
              }
            }else{
              cin>>pos;
              for (int i = 1; i < 5; ++i)
              {
                for (int j = 1; j < 5; ++j)
                {
                   cin>>ch;
                   ar[i][j]= (int)(ch-'0');
                }
              }
              ans[pos]=g[value()];
            }
        }
    }
}
