#include <stdio.h>

int main() {
    // Declare an array with 5 fixed values
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Given indices for operations
    int read_index = 2;
    int change_index = 0;
    int new_value = 99;
    
    // 1. Print the element at the given read index
    printf("Read: %d\n", arr[read_index]);
    
    // 2. Change the value at the specified change index
    arr[change_index] = new_value;
    
    // 3. Print the updated array
    printf("Updated array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
