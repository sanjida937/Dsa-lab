#include <stdio.h>
void DFS(int v, int n, int graph[n][n], int visited[n]){

    printf("%d ", v);
    visited[v] = 1;

    for ( int i = 0; i < n; i++)
    {
        if (graph[v][i] == 1 && visited[i] == 0)
        {
            DFS(i, n, graph, visited);
        }
    }
}

int main()
{
    int n, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[n][n];
    int visited[n];

    printf("Enter adjacency matrix:\n");

    for ( int i = 0; i < n; i++)
    {
        for ( int j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("DFS Traversal: ");
    DFS(start, n, graph, visited);
}
