#include <stdio.h>

typedef struct edge 
{
    int u, v, w;
}edge;

void applyUnion(int belongs[], int c1, int c2,int n) 
{
    for (int i = 0; i < n; i++)
        if (belongs[i] == c2)
            belongs[i] = c1;
}

void kruskal(int n,int graph[n][n]) 
{
    int belongs[n], cno1, cno2;
    typedef struct edge_list 
    {
    int n;
    edge data[n]; 
    }edge_list;
    edge_list elist;
    edge_list list;
    elist.n = 0;
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++) 
            if(graph[i][j] != 0) 
            {
                elist.data[elist.n].u = i;
                elist.data[elist.n].v = j;
                elist.data[elist.n].w = graph[i][j];
                elist.n++;
            }
    edge temp;
    for (int i = 1; i < elist.n; i++)
        for (int j = 0; j < elist.n - 1; j++)
            if (elist.data[j].w > elist.data[j + 1].w) 
            {
                temp = elist.data[j];
                elist.data[j] = elist.data[j + 1];
                elist.data[j + 1] = temp;
            }
    for (int i = 0; i < n; i++)
        belongs[i] = i;
    list.n = 0;
    for (int i = 0; i < elist.n; i++) 
    {
        cno1 = belongs[elist.data[i].u];
        cno2 = belongs[elist.data[i].v];
        if (cno1 != cno2) 
        {
            list.data[list.n] = elist.data[i];
            list.n = list.n + 1;
            applyUnion(belongs, cno1, cno2,n);
        }
    }
    int cost = 0;
    for (int i = 0; i < list.n; i++)
    {
        printf("%d - %d : %d\n", list.data[i].u, list.data[i].v, list.data[i].w);
        cost = cost + list.data[i].w;
    }
    printf("Spanning tree cost: %d\n", cost);
}

int main() 
{
    int total_cost,n;
    printf("Enter the number of vertices : ");
    scanf("%d",&n);
    int graph[n][n];
    printf("Enter the ajdacency matrix : \n");
    for (int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&graph[i][j]);
    kruskal(n,graph);
}
