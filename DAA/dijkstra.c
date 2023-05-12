#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int g[100][100];

int findMinVertex(int n,int dist[n+1],bool visited[n+1])
{
	int minVertex=-1;
    	for(int node=1;node<=n;node++)
    	{
        	if(!visited[node] && (minVertex==-1 || dist[node]<dist[minVertex]))
            		minVertex=node;
    	}
    	return minVertex;
}

int main()
{
	int adjNode,nodes,n,e;
    	printf("Enter the number of nodes and edges : \n");
    	scanf("%d %d", &n, &e);
	printf("Enter source, destination, weight of each edge : \n");
    	for (int i = 0; i < e; i++)
    	{
        	int u, v,wt;
        	scanf("%d %d %d", &u, &v,&wt);
        	g[u][v] = wt;
    	}
	bool vis[n+1];
    	int dist[n + 1];
	for (int i = 1; i <= n; i++)
    	{
        	dist[i]=INT_MAX;
        	vis[i]=false;
    	}
    	printf("Enter source : ");
    	int source;
    	scanf("%d",&source);
    	dist[source]=0;
    	for(nodes=1;nodes<=n;nodes++)
    	{
        	int minVertex = findMinVertex(n,dist, vis);
        	vis[minVertex] = true;
        	for (adjNode = 1; adjNode <= n; adjNode++)
            		if(g[minVertex][adjNode]!=0 && !vis[adjNode])
                		if(dist[minVertex]+g[minVertex][adjNode]<dist[adjNode])
                			dist[adjNode]=dist[minVertex]+g[minVertex][adjNode];
    	}
    	for(int i=1;i<=n;i++)
        printf("Node %d is at distance %d\n",i,dist[i]);
}

