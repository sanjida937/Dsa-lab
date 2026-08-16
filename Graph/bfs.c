#include <stdio.h>
int main()
{   //bfs traversal using queue
    int n, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[n][n];
    int visited[n];
    int queue[n];

    int front = 0;
    int rear = 0;

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

    queue[rear] = start;
    rear++;

    visited[start] = 1;

    printf("BFS Traversal: ");

    while (front < rear)
    {
        int v = queue[front];
        front++;

        printf("%d ", v);

        for (int i = 0; i < n; i++)
        {
            if (graph[v][i] == 1 && visited[i] == 0)
            {
                queue[rear] = i;
                rear++;

                visited[i] = 1;
            }
        }
    }

}
