#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

int main() {
    int left, right;

    // Input left and right positions
    printf("Enter left and right positions: ");
    scanf("%d %d", &left, &right);

    // Check if left is greater than right
    if (left > right) {
        printf("Invalid input: left should be less than or equal to right.\n");
        return 1;  // Exit with an error code
    }

    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 2;
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 3;
    head->next->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->next->data = 4;
    head->next->next->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->next->next->data = 5;
    head->next->next->next->next->next = NULL;

    // Traverse the list and find the nodes to be reversed
    struct Node* current = head;
    struct Node* prev = NULL;

    for (int i = 1; i < left; ++i) {
        prev = current;
        current = current->next;
    }

    struct Node* start = prev;  // Node before the sublist to be reversed
    struct Node* end = current;  // First node of the sublist to be reversed

    // Reverse the sublist from left to right
    for (int i = left; i <= right; ++i) {
        struct Node* nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    // Connect the reversed sublist back to the original list
    if (start != NULL) {
        start->next = prev;
    } else {
        head = prev;  // Update head if the reversal starts from the beginning
    }
    end->next = current;

    // Print the reversed list
    printf("Reversed list from position %d to %d: ", left, right);
    struct Node* printNode = head;
    while (printNode != NULL) {
        printf("%d ", printNode->data);
        printNode = printNode->next;
    }
    printf("\n");

    // Free allocated memory
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

