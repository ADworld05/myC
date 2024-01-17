//sample prpgram to create and display linked list
//head is the first node

#include <stdio.h>
#include <stdlib.h>

// Structure for a node in the linked list
struct node {
    int data;
    struct node *next;
};

// Pointer to the starting node
struct node *head = NULL;

// Function to create a linked list with n nodes
void createNodeList(int n) {
    struct node *newNode, *temp;
    int data, i;

    // Create the first node
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        exit(1);
    }

    printf("Enter data for node 1: ");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL;
    temp = head;

    // Create n-1 more nodes and add them to the linked list
    for (i = 2; i <= n; i++) {
        newNode = (struct node *)malloc(sizeof(struct node));
        if (newNode == NULL) {
            printf("Memory allocation failed. Exiting.\n");
            exit(1);
        }

        printf("Enter data for node %d: ", i);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        temp->next = newNode;
        temp = newNode;
    }
}

// Function to display the linked list
void displayList() {
    struct node *current = head;

    if (current == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    printf("Linked list contents:\n");
    while (current != NULL) {
        printf("%d\t", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the total number of nodes: ");
    scanf("%d", &n);

    createNodeList(n);
    displayList();

    return 0;
}
