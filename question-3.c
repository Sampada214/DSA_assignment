#include <stdio.h>
#include <stdlib.h>

/* Definition of node */
struct Node
{
    int data;
    struct Node *next;
};

/* Function to create a new node */
struct Node* createNode(int value)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

/* Function to insert node at the end */
void insertEnd(struct Node **head, int value)
{
    struct Node *newNode = createNode(value);
    struct Node *temp = *head;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

/* Function for normal traversal */
void normalTraversal(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

/* Function for reverse traversal using recursion */
void reverseTraversal(struct Node *head)
{
    if (head == NULL)
        return;

    reverseTraversal(head->next);
    printf("%d ", head->data);
}

/* Main function */
int main()
{
    struct Node *head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    printf("Normal traversal of linked list:\n");
    normalTraversal(head);

    printf("Reverse traversal of linked list:\n");
    reverseTraversal(head);
    printf("\n");

    return 0;
}
