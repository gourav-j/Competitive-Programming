#include <iostream>
#include <queue>
using namespace std;
int n;
bool isBipartite(int G[1005][1005])
{
    int color[n];
    for (int i = 0; i < n; ++i)
        color[i] = -1;
    
    for(int i=0;i<n;i++)
    {
        queue <int> q;
        if(color[i]==-1){
            q.push(i);
            color[i]=1;
            while (!q.empty())
             {
                int u = q.front();
                q.pop();
                for (int v = 0; v < n; ++v)
                {
                    if (G[u][v]&& color[v] == -1)
                    {
                        color[v] = 1 - color[u];
                        q.push(v);
                    }
                    else if (G[u][v] && color[v] == color[u])
                    return false;
                }
            }
        }
    }
    return true;
}
int main() {
	// your code goes here
	int t,m,a,b,ar[1005][1005];
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    for(int i=0;i<n;i++)
	    for(int j=0;j<n;j++){
	        if(i==j)
	        ar[i][j]=0;
	        else
	        ar[i][j]=1;
	    }
	    while(m--!=0){
	       cin>>a>>b;
	        ar[a-1][b-1]=0;
	        ar[b-1][a-1]=0;
	    }
	    isBipartite(ar) ? cout << "YES" : cout << "NO";
	    cout<<endl;
	}
	return 0;
}
