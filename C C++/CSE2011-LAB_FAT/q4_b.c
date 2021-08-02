#include<stdio.h>
#include<limits.h>
#define SIZE 20

int matrix[SIZE][SIZE], parent[SIZE];

int find(int s, int parent[]) {
	while(parent[s])
	s=parent[s];
	return s;
}

int join(int s1, int s2, int parent[]) {
    if (s1 != s2) {
        parent[s2] = s1;
        return 1;
    }
    return 0;
}

int main() {
    int v, i, j;
    printf("Enter the number of vertices: ");
    scanf("%d", &v);

    printf("\nEnter the adjacency matrix\n\n");
    for (i = 1; i <= v; i++) {
        for (j = 1; j <= v; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0)
                matrix[i][j] = INT_MAX;
        }
    }

    printf("\n");

    int ne = 1, min, s1, s2, s1x, s2x, cost = 0;

    while(ne < v) {
        for (i = 1, min = INT_MAX; i <= v; i++) {
                for (j = 1; j <= v; j++) {
                    if (matrix[i][j] < min) {
                        min = matrix[i][j];
                        s1x = s1 = i;
                        s2x = s2 = j;
                    }
                }
        }

        s1 = find(s1, parent);
        s2 = find(s2, parent);

        if (join(s1, s2, parent)) {
            printf("Edge %d: (%c, %c) - %d\n", ne++, (char)(s1x+64), (char)(s2x+64), min);
            cost += min;
        }

        matrix[s1x][s2x] = matrix[s2x][s1x] = INT_MAX;
    }

    printf("The cost of the MST is: %d", cost);
}

