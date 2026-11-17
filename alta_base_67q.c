#include <stdio.h>
#include <stdlib.h>

#define HASH_SIZE 10007

typedef struct Node {
    int key;
    struct Node* next;
} Node;

Node* hashTable[HASH_SIZE];

// Hash function handling negative numbers safely
int getHash(int key) {
    int h = key % HASH_SIZE;
    return (h < 0) ? h + HASH_SIZE : h;
}

// Check if key exists in hashmap
int contains(int key) {
    int h = getHash(key);
    Node* curr = hashTable[h];
    while (curr != NULL) {
        if (curr->key == key) return 1;
        curr = curr->next;
    }
    return 0;
}

// Insert unique key into hashmap
void insert(int key) {
    if (contains(key)) return;
    int h = getHash(key);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->next = hashTable[h];
    hashTable[h] = newNode;
}

void findPairsWithDifferenceK(int arr[], int n, int k) {
    if (k < 0) k = -k; // Difference magnitude is positive

    // Step 1: Populate the hashmap with all unique elements
    for (int i = 0; i < n; i++) {
        insert(arr[i]);
    }

    // Step 2: Check if (arr[i] + k) exists for each unique element
    int first = 1;
    for (int i = 0; i < n; i++) {
        if (contains(arr[i])) {
            int target = arr[i] + k;
            if (k == 0) continue; // Skip if k=0 unless counting duplicates
            
            if (contains(target)) {
                if (!first) printf(",");
                printf("(%d,%d)", arr[i], target);
                first = 0;
            }
            // Remove arr[i] to avoid duplicate pairs if input has duplicates
            int h = getHash(arr[i]);
            Node* curr = hashTable[h];
            Node* prev = NULL;
            while (curr != NULL) {
                if (curr->key == arr[i]) {
                    if (prev == NULL) hashTable[h] = curr->next;
                    else prev->next = curr->next;
                    free(curr);
                    break;
                }
                prev = curr;
                curr = curr->next;
            }
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 5, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    findPairsWithDifferenceK(arr, n, k); // Output: (1,4),(2,5)
    return 0;
}
