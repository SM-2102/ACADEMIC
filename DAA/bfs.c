#include <stdio.h>

void bfs(int n, int graph[n][n], int visited[], int start)
{
	int queue[n], rear = -1, front = -1;
	for (int i = 0; i < n; i++)
		visited[i] = 0;
	queue[++rear] = start;
	++front;
	visited[start] = 1;
	while (rear >= front)
	{
		start = queue[front++];
		printf("%d ", start);
		for (int i = 0; i < n; i++)
			if (graph[start][i] && visited[i] == 0)
			{
				queue[++rear] = i;
				visited[i] = 1;
			}
	}
}

int main()
{
	int n;
    printf("Enter the number of vertices : ");
    scanf("%d",&n);
    int visited[n];
    for(int i=0;i<n;i++)
        visited[i]=0;
	int graph[n][n];
    printf("Enter the adjacency matrix : \n");
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &graph[i][j]);
	printf("BFS: ");
	bfs(n,graph,visited,0);
}
