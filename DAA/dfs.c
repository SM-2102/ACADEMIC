#include <stdio.h>

void dfs(int n, int graph[n][n], int visited[n], int i)
{
	int j;
    printf("%d ", i);
    visited[i] = 1;	
    for (j = 0; j <n; j++)	
        if(graph[i][j]==1 && !visited[j])
            dfs(n,graph,visited,j);	
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
	printf("DFS: ");
	dfs(n,graph,visited,0);	
}
