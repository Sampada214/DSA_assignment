#include <stdio.h>
#include <stdlib.h>

/* Definition of a node for doubly linked list */
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

/* Function to create a new node */
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

/* Function to insert a new node after a given node */
void insertAfter(struct Node* prevNode, int value) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL.\n");
        return;
    }

    struct Node* newNode = createNode(value);
    newNode->next = prevNode->next;
    newNode->prev = prevNode;

    if (prevNode->next != NULL)
        prevNode->next->prev = newNode;

    prevNode->next = newNode;
}

/* Function to delete a given node */
void deleteNode(struct Node** head, struct Node* delNode) {
    if (*head == NULL || delNode == NULL)
        return;

    if (*head == delNode)
        *head = delNode->next;

    if (delNode->next != NULL)
        delNode->next->prev = delNode->prev;

    if (delNode->prev != NULL)
        delNode->prev->next = delNode->next;

    free(delNode);
}

/* Function to print the list forward */
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

/* Main function to demonstrate DLL operations */
int main() {
    struct Node* head = createNode(10);
    struct Node* second = createNode(20);
    struct Node* third = createNode(30);

    /* Linking nodes */
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    printf("Original Doubly Linked List:\n");
    printList(head);

    /* Insert after second node */
    insertAfter(second, 25);
    printf("After inserting 25 after 20:\n");
    printList(head);

    /* Delete third node (which originally had value 30) */
    deleteNode(&head, third);
    printf("After deleting node with value 30:\n");
    printList(head);

    return 0;
}
