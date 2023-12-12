#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* reverseLinkedList(Node* head) {
    Node *prev = NULL;  // Pointer to the previous node
    Node *current = head;  // Pointer to the current node
    Node *next = NULL;  // Pointer to the next node

    while (current != NULL) {
        // Store the next node
        next = current->next;

        // Reverse the pointer to the previous node
        current->next = prev;

        // Move to the next nodes
        prev = current;
        current = next;
    }

    // The new head of the reversed list is the previous last node
    head = prev;

    return head;
}

void printList(Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    // Create a sample linked list
    Node* head = NULL;
    for (int i = 5; i >= 1; i--) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = i;
        newNode->next = head;
        head = newNode;
    }

    printf("Original list: ");
    printList(head);

    // Reverse the linked list
    head = reverseLinkedList(head);

    printf("Reversed list: ");
    printList(head);

    // Free memory (don't forget to deallocate memory if not needed)
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}