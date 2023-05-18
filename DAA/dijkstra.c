#include<stdio.h>
#include<limits.h>
#include<stdbool.h>

void printPath(int n,int current_v, int parents[n])
{
	if (current_v == -1) 
		return;
	printPath(n,parents[current_v], parents);
	printf("%d ",current_v);
}

void printSolution(int start, int n,int distances[n],int parents[n])
{
	printf(" Vertex\t     Distance \tPath");
	for (int i = 0; i < n;i++)
		if (i != start) 
		{
			printf("\n %d -> ",start);
			printf("%d \t",i);
			printf("%d \t",distances[i]);
			printPath(n,i, parents);
		}
}


void dijkstra(int n,int graph[n][n],int start)
{
	int shortest_dist[n];
	bool added[n];
	for (int i = 0; i < n;i++) 
	{
		shortest_dist[i] = INT_MAX;
		added[i] = false;
	}
	shortest_dist[start] = 0;
	int parents[n];
	parents[start] = -1;
	for (int i = 1; i < n; i++) 
	{
		int nearestVertex = -1;
		int shortestDistance = INT_MAX;
		for (int j = 0; j < n;j++)
			if (!added[j] && shortest_dist[j]< shortestDistance) 
			{
				nearestVertex = j;
				shortestDistance = shortest_dist[j];
			}
		added[nearestVertex] = true;
		for (int i = 0; i < n;i++)
		{
			int dist=graph[nearestVertex][i];
			if (dist > 0 && ((shortestDistance + dist)< shortest_dist[i])) 
			{
				parents[i] = nearestVertex;
				shortest_dist[i]= shortestDistance + dist;
			}
		}
	}
	printSolution(start, n,shortest_dist, parents);
}

int main()
{
	int n;
    printf("Enter the number of vertices : ");
    scanf("%d",&n);
	int graph[n][n],source;
    printf("Enter the adjacency matrix : \n");
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &graph[i][j]);
	printf("Enter the source vertex : ");
	scanf("%d",&source);
	dijkstra(n,graph,source);
}
