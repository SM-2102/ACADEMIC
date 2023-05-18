#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Edge 
{
    int source, dest, weight;
};

struct Graph 
{
    int n, e;
    struct Edge edges[100];
};

void initializeGraph(struct Graph *graph, int n, int e) 
{
    graph->n = n;
    graph->e = e;
}

void addEdge(struct Graph *graph, int source, int dest, int weight) 
{
    if (source >= 0 && source < graph->n && dest >= 0 && dest < graph->n) 
        graph->edges[graph->e].source = source;
        graph->edges[graph->e].dest = dest;
        graph->edges[graph->e].weight = weight;
        graph->e++;
}

void printPath(int parent[], int vertex) 
{
    if (vertex == -1)
        return;
    printPath(parent, parent[vertex]);
    printf("%d ", vertex);
}

void bellmanFord(struct Graph *graph, int source) 
{
    int n = graph->n;
    int e = graph->e;
    int distance[n];
    int parent[n];

    for (int i = 0; i < n; i++) {
        distance[i] = INT_MAX;
        parent[i] = -1;
    }

    distance[source] = 0;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < e; j++) {
            int u = graph->edges[j].source;
            int v = graph->edges[j].dest;
            int weight = graph->edges[j].weight;

            if (distance[u] != INT_MAX && distance[u] + weight < distance[v]) {
                distance[v] = distance[u] + weight;
                parent[v] = u;
            }
        }
    }

    for (int i = 0; i < e; i++) {
        int u = graph->edges[i].source;
        int v = graph->edges[i].dest;
        int weight = graph->edges[i].weight;

        if (distance[u] != INT_MAX && distance[u] + weight < distance[v]) {
            printf("Graph contains negative-weight cycle.\n");
            return;
        }
    }

    printf("Vertex\tDistance\tPath\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", i);
        if (distance[i] == INT_MAX) {
            printf("INF\t\tNo path\n");
        } else {
            printf("%d\t\t", distance[i]);
            printPath(parent, i);
            printf("\n");
        }
    }
}

int main() {
    struct Graph graph;
    int n,e,source;

    printf("Enter the number of vertices : ");
    scanf("%d", &n);
    printf("Enter the number of edges : ");
    scanf("%d", &e);

    initializeGraph(&graph, n, 0);

    printf("Enter the source,destination and weight of each edge :\n");
    for (int i = 0; i < e; i++) 
    {
        int source, dest, weight;
        scanf("%d %d %d", &source, &dest, &weight);
        addEdge(&graph, source, dest, weight);
    }

    printf("Enter the source vertex: ");
    scanf("%d", &source);

    bellmanFord(&graph, source);

}
