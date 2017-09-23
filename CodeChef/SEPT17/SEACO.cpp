/******************gourav_j**************/
#include <bits/stdc++.h>
#define FF first
#define SS second
#define pb push_back
#define mp make_pair
#define INF 1e18
#define MOD 1000000007
#define MAXN 100005
#define mem(a, v) memset(a, v, sizeof a)
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))
#define fori(i,a,b) for(int  i=(a);i<=(b);i++)
#define forl(i,a,b) for(ll  i=(a);i<=(b);i++)
#define rfor(i,a,b) for(int i=(b);i>=(a);i--)
#define forit(i, a) for ( __typeof( (a).begin() ) i = (a).begin(); i != (a).end(); i++ )
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> ii;
typedef vector<ii> vii;
typedef map<string,ll> msi;
typedef set<ll> si;
        /***********code begins here***********/
 struct data{
  int type;
  int l;
  int r;
}in[100005];
ll getSum(ll BITree[], int index)
{
  ll sum = 0; 
  
  if(index<0)
    return 0;
  while (index>0)
  {
    sum = (sum+BITree[index]+MOD)%MOD;
    index -= index & (-index);
  }
  return sum;
}
void updateBIT(ll BITree[], int n, int index, ll val)
{
  
  //cout<<index<<"L";
  while (index <= n)
  {
    BITree[index] = (BITree[index]+val+MOD)%MOD;
    index += index & (-index);
  }
  //cout<<BITree[3]<<'\n';
}
ll *constructBITree(int n)
{
  ll *BITree = new ll[n+5];
  for (int i=0; i<=n+1; i++)
    BITree[i] = 0;
  return BITree;
}
void solve(){
    int n,m;
    cin>>n>>m;
    fori(i,1,m){
      cin>>in[i].type>>in[i].l>>in[i].r;
    }
    ll *BITree = constructBITree(m);
     ll arr[m+1];
    rfor(i,1,m){
      if(in[i].type==2){
        ll value=(getSum(BITree,i)+1)%MOD;
        updateBIT(BITree,m,in[i].l,value);
        updateBIT(BITree,m,in[i].r+1,-value);
      }
      else{
        updateBIT(BITree,m,i,1);
        updateBIT(BITree,m,i+1,-1);
      }
    }
    fori(i,1,m){
      arr[i]=getSum(BITree,i)%MOD;
    }
    ll *BITree2= constructBITree(n+1);
    fori(i,1,m){
      if(in[i].type==1)
        {updateBIT(BITree2,n,in[i].l,arr[i]);
      updateBIT(BITree2,n,in[i].r+1,-arr[i]);}
    } 
    fori(i,1,n)
    cout<<getSum(BITree2,i)%MOD<<" ";
    cout<<'\n';
}
int main() {
    ios::sync_with_stdio(false);
  #ifndef ONLINE_JUDGE
        freopen("inp.txt","r",stdin);
        freopen("out.txt","w",stdout); 
    #endif  
    int T=1; 
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}
