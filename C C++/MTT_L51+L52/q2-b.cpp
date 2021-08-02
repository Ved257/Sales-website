#include <stdio.h>
#include <conio.h>
#include <limits.h>
#define MAX 10


void dijkstra(int Graph[MAX][MAX], int v, int root)
{

    int matrix[MAX][MAX], dist[MAX], pred[MAX];
    int visited[MAX], count, min_dist, next, i, j;

    for (i = 0; i < v; i++)
        for (j = 0; j < v; j++)
            if (Graph[i][j] == 0)
                matrix[i][j] = INT_MAX;
            else
                matrix[i][j] = Graph[i][j];
    for (i = 0; i < v; i++)
    {
        dist[i] = matrix[root][i];
        pred[i] = root;
        visited[i] = 0;
    }
    dist[root] = 0;
    visited[root] = 1;
    count = 1;
    while (count < v - 1)
    {
        min_dist = INT_MAX;
        for (i = 0; i < v; i++)
            if (dist[i] < min_dist && !visited[i])
            {
                min_dist = dist[i];
                next = i;
            }
        visited[next] = 1;
        for (i = 0; i < v; i++)
            if (!visited[i])
                if (min_dist + matrix[next][i] < dist[i])
                {
                    dist[i] = min_dist + matrix[next][i];
                    pred[i] = next;
                }
        count++;
    }

    for (i = 0; i < v; i++)
        if (i != root)
        {
            printf("\nDistance of node%d=%d", (i + 1), dist[i]);
            printf("\nPath=%d", i);
            j = i;
            do
            {
                j = pred[j];
                printf("<-%d", j);
            } while (j != root);
        }
}

int main() {
    int Graph[MAX][MAX], i, j, v, u;
    printf("Enter number of vertices:");
    scanf("%d", &v);
    printf("\nEnter the adjacency matrix:\n");
    for (i = 0; i < v; i++)
        for (j = 0; j < v; j++)
            scanf("%d", &Graph[i][j]);
    printf("\nEnter the starting node:");
    scanf("%d", &u);
    dijkstra(Graph, v, (u - 1));
    return 0;
}
