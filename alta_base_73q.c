#include <stdio.h>
#include <stdlib.h>

// Definition of a singly linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to count the number of nodes
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* current = head;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

// Helper function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Creating the linked list: 1 -> 2 -> 3 -> 4
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);

    // Output: 4
    printf("%d\n", countNodes(head));

    return 0;
}
