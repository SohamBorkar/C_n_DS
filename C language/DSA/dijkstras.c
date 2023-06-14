#include <stdio.h>
#define INFINITY 99
#define MAX 10
#define startnode 0
//  #define is preprocessor directory, which replace value of max as 10 during compilation starts

void getgraph(int cost[MAX][MAX], int n, int u)
{
    printf("Enter the number of Vertices: \n");
    scanf("%d", &n);
    printf("Enter cost matrix: \n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &cost[i][j]);
};

void dijkstra(int cost[MAX][MAX], int n)
{
    int distance[MAX], predefined[MAX], visited[MAX];
    int count, mindistance, nextnode, j;

    for (int i = 0; i < n; i++)
    {
        distance[i] = cost[startnode][i];
        predefined[i] = startnode; // it is 0 decleared
        visited[i] = 0;
    }
    distance[startnode] = 0;
    visited[startnode] = 1;
    count = 1;

    while (count < n - 1)
    {
        mindistance = INFINITY;
        for (int i = 0; i < n; i++)
            if (distance[i] < mindistance && !visited[i])
            {
                mindistance = distance[i];
                nextnode = i;
            }

        // check if better path exists through nextnode
        visited[nextnode] = 1;
        for (int i = 0; i < n; i++)
            if (!visited[i])
                if (mindistance + cost[nextnode][i] < distance[i])
                {
                    distance[i] = mindistance + cost[nextnode][i];
                    predefined[i] = nextnode;
                    
                }
        count++;
    }

    // printing the path and distance of each node
    for (int i = 0; i < n; i++)
    {
        if (i != startnode)
        {
            printf("Distance of node %d = %d \n", i, distance[i]);
            printf("Path =  %d  ", i);
            j = i;
            do
            {
                j = predefined[j];
                printf("<- %d \n", j);
            } while (j != startnode);
        }
    }
};

int main()
{
    int cost[MAX][MAX], n, u;
    getgraph(cost, n, u);

    dijkstra(cost, n);

    return 0;
}