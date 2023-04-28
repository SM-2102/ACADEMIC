#include <stdio.h> 
#include <limits.h>   
     
int minimum_key(int min[], int mst[],int vertices)    
{  
    int minimum  = INT_MAX, mini;    
    for (int i = 0; i < vertices; i++)  
        if (mst[i] == 0 && min[i] < minimum ) 
        {  
            minimum = min[i];
            mini = i;   
        } 
    return mini;
}
 
void prim(int vertices,int graph[vertices][vertices])    
{    
    int parent[vertices];    
    int min[vertices];       
    int mst[vertices];      
    int edge; 
    for (int i = 0; i < vertices; i++)  
    {  
        min[i] = INT_MAX;  
        mst[i] = 0;    
    }  
    min[0] = 0;   
    parent[0] = -1;     
    for (int count = 0; count < vertices-1; count++)    
    {      
        edge = minimum_key(min, mst,vertices);    
        mst[edge] = 1;    
        for (int i = 0; i < vertices; i++)     
            if (graph[edge][i] && mst[i] == 0 && graph[edge][i] <  min[i])    
            {  
                parent[i]  = edge;
                min[i] = graph[edge][i];    
            }   
    }    
    printf("   Edge\t Weight\n");  
    for (int i = 1; i < vertices; i++)    
        printf(" %d <-> %d    %d \n", parent[i], i, graph[i][parent[i]]);    
      
}   

int main()    
{  
    int vertices;
    printf("Enter the number of vertices : ");
    scanf("%d",&vertices);
    int graph[vertices][vertices];
    printf("Enter the adjacency matrix : \n");
    for(int i = 0;i<vertices;i++)
        for(int j=0;j<vertices;j++)
            scanf("%d",&graph[i][j]);  
    prim(vertices,graph);    
}  