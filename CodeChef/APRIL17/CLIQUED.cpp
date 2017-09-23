/******************gourav_j**************/
 /***********This code belongs to me**************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define INF LONG_LONG_MAX
 
class Graph
{
	int V; // No. of vertices
 
	list< pair<ll, ll> > *adj;
 
public:
	Graph(ll V); // Constructor
 
	void addEdge(ll u, ll v, ll w);
 
	vector<ll> shortestPath(ll s);
};
 
Graph::Graph(ll V)
{
	this->V = V;
	adj = new list< pair<ll, ll> >[V];
}
 
void Graph::addEdge(ll u, ll v, ll w)
{
	adj[u].push_back(make_pair(v, w));
	adj[v].push_back(make_pair(u, w));
}
 
vector<ll> Graph::shortestPath(ll src)
{
	set< pair<ll, ll> > setds;
 
	vector<ll> dist(V, INF);
 
	setds.insert(make_pair(0, src));
	dist[src] = 0;
 
	while (!setds.empty())
	{
		pair<ll, ll> tmp = *(setds.begin());
		setds.erase(setds.begin());
 
		ll u = tmp.second;
 
		list< pair<ll, ll> >::iterator i;
		for (i = adj[u].begin(); i != adj[u].end(); ++i)
		{
			ll v = (*i).first;
			ll weight = (*i).second;
 
			if (dist[v] > dist[u] + weight)
			{
				if (dist[v] != INF)
					setds.erase(setds.find(make_pair(dist[v], v)));
 
				dist[v] = dist[u] + weight;
				setds.insert(make_pair(dist[v], v));
			}
		}
	}
	return dist;
 
	/*for (ll i = 0; i < V; ++i)
		printf("%lld ",dist[i]);
	printf("\n");*/
}
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    ll V,k,x,m,s,a,b,c;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>V>>k>>x>>m>>s;
        //cout<<s<<" "<<k<<endl;
        vector<ll> dist;
        Graph g(V);
        if(s<=k)
        {
            for(int i=0;i<k;i++){
                /*if(s-1 == i)
                g.addEdge(s-1,i,0);
                else*/
                g.addEdge(s-1,i,x);
            }
        }
        for(ll i=0;i<m;i++){
            cin>>a>>b>>c;
            g.addEdge( a-1, b-1, c);
            //g.addEdge( b-1, a-1, c);
        }
        dist=g.shortestPath(s-1);
        ll mn=LONG_LONG_MAX;ll pos;
         if(s>k){
            
            for(ll i=0;i<k;i++){
                if(dist[i]<mn)
                {mn=dist[i];pos=i;}
            }
            //cout<<mn<<" j"<<pos<<"\n";
            for(ll i=0;i<k;i++)
            {
                g.addEdge(i,pos,x);
            }
            dist=g.shortestPath(s-1);
        }
        //cout<<mn<<'\n';
        for (ll i = 0; i < V; ++i)
        {  
		    printf("%lld ",dist[i]);
        }
	        printf("\n");
}
	return 0;
}
