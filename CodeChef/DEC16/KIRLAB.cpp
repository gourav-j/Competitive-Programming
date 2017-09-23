#include <bits/stdc++.h>
#define max(a,b) a>b?a:b
using namespace std;
static int leastPrime[10000001],pr[10000000];
long long k;
void sieve()
{
    int i,j;
    for ( i=2; i<=10000000; ++i)
    {
   if (leastPrime[i] == 0)
   {
   leastPrime[i] = i;
   pr[k++]=i;
   }
   for ( j=0; j<k && pr[j]<=leastPrime[i] && i*pr[j]<=10000000; ++j)
   leastPrime[i * pr[j]] = pr[j];
    }
}
int main()
{
    sieve();
    int hash[10000001];
    long long t,n,ar,ans,i,j,cnt,tmp,b[1000005];
    cin>>t;
    while(t--)
    {
        memset(hash,0,sizeof hash);
        cin>>n;
        ans=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&ar);
            if(leastPrime[ar]==ar)
            {
                hash[ar]++;
                ans=max(ans,hash[ar]);
            }
            else
            {
                tmp=0;
                cnt=0;
                for(j=0;pr[j]*pr[j]<=(ar);j++)
                {
                    if(ar%pr[j]==0)
                    {
                        while(ar%pr[j]==0)
                            ar/=pr[j];
                       // tmp=max(tmp,hash[pr[j]]);
                        b[cnt++]=pr[j];
                    }
                }
                if(ar==leastPrime[ar])
                {
                        //tmp=max(tmp,hash[ar]);
                        b[cnt++]=ar;
                }
                for(j=0;j<cnt;j++)
                tmp=max(tmp,hash[b[j]]);
                for(j=0;j<cnt;j++)
                {
                    hash[b[j]]=tmp+1;
                }
                ans=max(ans,tmp+1);
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
