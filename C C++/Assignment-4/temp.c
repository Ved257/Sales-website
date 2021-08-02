// C program for the above approach
#include <stdio.h>

// N vertices and M Edges
int N, M,q[20],visited[20];

// Function to create Adjacency Matrix
void createAdjMatrix(int Adj[][N + 1],
					int arr[][2])
{

	// Initialise all value to this
	// Adjacency list to zero
	for (int i = 0; i < N + 1; i++) {

		for (int j = 0; j < N + 1; j++) {
			Adj[i][j] = 0;
		}
	}

	// Traverse the array of Edges
	for (int i = 0; i < M; i++) {

		// Find X and Y of Edges
		char x = arr[i][0];
		char y = arr[i][1];

		// Update value to 1
		Adj[x][y] = 1;
		Adj[y][x] = 1;
	}
}

// Function to print the created
// Adjacency Matrix
void printAdjMatrix(int Adj[][N + 1])
{

	// Traverse the Adj[][]
	for (int i = 1; i < N + 1; i++) {
		for (int j = 1; j < N + 1; j++) {

			// Print the value at Adj[i][j]
			printf("%d ", Adj[i][j]);
		}
		printf("\n");
	}
}

// Driver Code
int main()
{

	// Number of vertices
	N = 6;

	// Given Edges
	int arr[][2]
        = { { 1, 2 }, { 2, 5 }, 
            { 5, 4 }, { 4, 1 }, { 1, 3 }, { 3, 2 }, { 4, 6 } };

	// Number of Edges
	M = sizeof(arr) / sizeof(arr[0]);
    // M=7;

	// For Adjacency Matrix
	int Adj[N + 1][N + 1];
    //Make queue and array for number of vertexes visited 0

	
    for (int i=1;i<=N;i++) {
		q[i]=0;
		visited[i]=0;
	}

    // Function call to create
	// Adjacency Matrix

	createAdjMatrix(Adj, arr);

	// Print Adjacency Matrix
	printAdjMatrix(Adj);

	return 0;
}
