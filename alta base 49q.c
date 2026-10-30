#include <stdio.h>

int printNumbers(int n) {
    if (n == 0) return 0; // Stop at 0
    
    printNumbers(n - 1);  // Go down to smaller numbers
    printf("%d ", n);     // Print on the way back up
    return 0;             // Return an integer
}

int main() {
    printNumbers(5);
    return 0;
}
