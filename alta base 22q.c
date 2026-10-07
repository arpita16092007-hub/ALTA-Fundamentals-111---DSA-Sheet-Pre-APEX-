#include <stdio.h>

// 1. Pass-by-Value (Fails to change the original)
// The function makes a local copy of the number.
void changeByValue(int x) {
    x = 99; 
}

// 2. Pass-by-Pointer (Succeeds in changing the original)
// The '*' means it receives the address of the original variable.
void changeByPointer(int *x) {
    *x = 99; // The '*' here updates the value at that address
}

int main() {
    // Test 1: Pass-by-Value
    int myNumber1 = 10;
    changeByValue(myNumber1);
    printf("After changeByValue: %d\n", myNumber1); 
    // Output: 10 (Did not change!)

    // Test 2: Pass-by-Pointer
    int myNumber2 = 10;
    // The '&' passes the memory address of myNumber2 to the function
    changeByPointer(&myNumber2);
    printf("After changeByPointer: %d\n", myNumber2); 
    // Output: 99 (It changed!)

    return 0;
}
