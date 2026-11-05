#include <stdio.h>

#define MAX 5 // Maximum size of the maze

// Directions in lexicographical order: Down, Left, Right, Up
int dr[] = {1, 0, 0, -1};
int dc[] = {0, -1, 1, 0};
char dir_chars[] = {'D', 'L', 'R', 'U'};

// Global counter for paths found
int path_count = 0;

void backtrack(int r, int c, int N, int maze[MAX][MAX], int visited[MAX][MAX], char path[], int path_len) {
    // 1. Base Case: Reached the bottom-right destination
    if (r == N - 1 && c == N - 1) {
        path[path_len] = '\0'; // Null-terminate the string before printing
        printf("Path %d: %s\n", ++path_count, path);
        return;
    }

    // 2. Choice: Try all 4 possible movements
    for (int i = 0; i < 4; i++) {
        int next_r = r + dr[i];
        int next_c = c + dc[i];

        // 3. Validation: Check if the next cell is inside boundaries, open, and unvisited
        if (next_r >= 0 && next_r < N && next_c >= 0 && next_c < N) {
            if (maze[next_r][next_c] == 1 && visited[next_r][next_c] == 0) {
                
                // --- ACTION ---
                visited[next_r][next_c] = 1; // Mark as visited
                path[path_len] = dir_chars[i];

                // --- RECURSION ---
                backtrack(next_r, next_c, N, maze, visited, path, path_len + 1);

                // --- BACKTRACK --- (Undo choice for alternative paths)
                visited[next_r][next_c] = 0; // Unmark
            }
        }
    }
}

void findPaths(int N, int maze[MAX][MAX]) {
    // Edge case: If entry or exit is blocked
    if (maze[0][0] == 0 || maze[N - 1][N - 1] == 0) {
        printf("EMPTY\n");
        return;
    }

    // Initialize visited matrix to 0 (unvisited)
    int visited[MAX][MAX];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            visited[i][j] = 0;
        }
    }
    
    // Buffer to store the path characters
    char path[MAX * MAX]; 
    
    // Mark the starting point as visited and begin backtracking
    visited[0][0] = 1;
    path_count = 0;
    
    backtrack(0, 0, N, maze, visited, path, 0);
    
    if (path_count == 0) {
        printf("EMPTY\n");
    }
}

int main() {
    int N = 4;
    
    // Corrected complete 4x4 Maze Definition
    int maze[MAX][MAX] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    printf("Finding paths for a %dx%d maze:\n", N, N);
    findPaths(N, maze);

    return 0;
}
