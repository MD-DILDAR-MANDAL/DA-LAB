#include <stdio.h>
#include <stdbool.h>
#define MAX 10
#define INF 9999

void prim(int graph[MAX][MAX], int n) {
    int select[MAX] = {0}; // Array to keep track of selected vertices
    select[0] = 1; // Start with the first vertex
    int c = 0; // Counter for selected vertices
    int sum = 0; // Total cost
    
    while (c < (n - 1)) {
        int min = INF; // Minimum-weight edge
        int x = 0, y = 0; // Vertices of the minimum-weight edge
        
        for (int i = 0; i < n; i++) {
            if (select[i] == 1) {
                for (int j = 0; j < n; j++) {
                    if (graph[i][j] != 0 && select[j] == 0) {
                        if (graph[i][j] < min) {
                            min = graph[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }
        select[y] = 1; // Select the vertex with minimum edge weight
        sum += min; // Update the total cost
        c++; // Increase the counter
        printf("(%d, %d), ", x, y); // Print the selected edge
    }
    
    printf("\nTotal cost: %d\n", sum); // Print the total cost of the minimum spanning tree
}

int main() {
    int n;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    
    int graph[n][n];
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }
    
    printf("Minimum Spanning Tree Edges:\n");
    prim(graph, n);
    
    return 0;
}
