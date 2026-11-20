#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Helper function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at a 1-based position
struct Node* insertAtPosition(struct Node* head, int data, int pos) {
    struct Node* newNode = createNode(data);

    // Case 1: Insert at the head (position 1)
    if (pos == 1) {
        newNode->next = head;
        return newNode;
    }

    // Traverse to the node just before the desired position (pos - 1)
    struct Node* curr = head;
    for (int i = 1; i < pos - 1 && curr != NULL; i++) {
        curr = curr->next;
    }

    // If position is out of bounds
    if (curr == NULL) {
        free(newNode);
        return head;
    }

    // Link the new node into the list
    newNode->next = curr->next;
    curr->next = newNode;

    return head;
}

// Helper function to print the linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d", head->data);
        if (head->next != NULL) printf("->");
        head = head->next;
    }
    printf("\n");
}

int main() {
    // Build initial list: 1->2->4
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(4);

    // Insert 3 at position 3
    head = insertAtPosition(head, 3, 3);

    printList(head); // Output: 1->2->3->4
    return 0;
}
