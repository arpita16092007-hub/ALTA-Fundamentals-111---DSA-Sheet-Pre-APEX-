#include <stdio.h>

int main() {
    // Declare a 3x3 two-dimensional array
    int grid[3][3];
    int counter = 1;

    // Fill the array with numbers 1 to 9 in row-major order
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            grid[i][j] = counter;
            counter++;
        }
    }

    // Print the array as a 3x3 grid
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
