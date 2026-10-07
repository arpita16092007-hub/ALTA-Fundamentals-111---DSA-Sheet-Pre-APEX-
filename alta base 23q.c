#include <stdio.h>

// Define a structure to hold both results
typedef struct {
    int quotient;
    int remainder;
} DivResult;

// Function that returns the struct containing both values
DivResult divide(int dividend, int divisor) {
    DivResult result;
    result.quotient = dividend / divisor;
    result.remainder = dividend % divisor;
    return result;
}

int main() {
    // Call the function and store the structured result
    DivResult res = divide(17, 5);
    
    printf("Quotient: %d, Remainder: %d\n", res.quotient, res.remainder);
    return 0;
}
