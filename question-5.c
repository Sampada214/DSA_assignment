#include <stdio.h>
#include <stdlib.h>

#define MAX 10  // Maximum number of vertices

int queue[MAX], front = -1, rear = -1;


void enqueue(int v) {
    if (rear == MAX - 1) {
        printf("Queue overflow\n");
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = v;
}

int dequeue() {
    if (front == -1) return -1;
    int val = queue[front++];
    if (front > rear) front = rear = -1;
    return val;
}

void DFS(int graph[MAX][MAX], int visited[MAX], int vertex, int n) {
    visited[vertex] = 1;
    printf("%d ", vertex);

    for (int i = 0; i < n; i++) {
        if (graph[vertex][i] == 1 && !visited[i])
            DFS(graph, visited, i, n);
    }
}

void BFS(int graph[MAX][MAX], int start, int n) {
    int visited[MAX] = {0};
    enqueue(start);
    visited[start] = 1;

    printf("%d ", start);

    while (front != -1) {
        int v = dequeue();

        for (int i = 0; i < n; i++) {
            if (graph[v][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
                printf("%d ", i);
            }
        }
    }
}

int main() {
    int n, edges, u, v;
    int graph[MAX][MAX] = {0};

    printf("Enter number of vertices (max %d): ", MAX);
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges (u v) one per line (0-indexed vertices):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &u, &v);
        if (u >= n || v >= n) {
            printf("Invalid vertex. Please enter values between 0 and %d\n", n-1);
            i--; 
            continue;
        }
        graph[u][v] = 1;
        graph[v][u] = 1; 
    }

    /* Display adjacency matrix */
    printf("\nAdjacency Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", graph[i][j]);
        printf("\n");
    }

    /* Perform DFS */
    int visited[MAX] = {0};
    printf("\nDFS Traversal starting from vertex 0:\n");
    DFS(graph, visited, 0, n);

    /* Perform BFS */
    printf("\nBFS Traversal starting from vertex 0:\n");
    BFS(graph, 0, n);

    printf("\n");
    return 0;
}
