# DSA Assignment 2 – Question 4

## Program: Doubly Linked List with Insert and Delete Operations (C Language)

This program demonstrates the use of a **doubly linked list (DLL)**.  
It allows insertion of a node **after a given node**, deletion of a specific node, and displays the list.  
The doubly linked list maintains both **previous** and **next** pointers for each node, enabling traversal in both directions.

---

## (a) Explanation of Data Structures

- The primary data structure is a **doubly linked list**.  
- Each node contains:
  - `data` → stores the value of the node  
  - `prev` → pointer to the previous node  
  - `next` → pointer to the next node  
- The `prev` and `next` pointers allow traversal **forward and backward**, and make insertion and deletion easier at any position.

---

## (b) Description of Functions Implemented

- **createNode(value)**  
  Creates a new node with the given value and initializes its `prev` and `next` pointers to NULL.

- **insertAfter(prevNode, value)**  
  Inserts a new node with the given value **after the specified node**, updating the `prev` and `next` pointers of adjacent nodes.

- **deleteNode(&head, delNode)**  
  Deletes the specified node from the doubly linked list and updates neighboring nodes’ pointers. Frees the memory of the deleted node.

- **printList(head)**  
  Traverses the list from the head node to the end and prints the node values in order.

---

## (c) Overview of the `main()` Method

- Initializes three nodes with values 10, 20, and 30 and links them to form the initial doubly linked list.  
- Prints the original list using `printList()`.  
- Demonstrates insertion by adding a node with value 25 after the second node.  
- Demonstrates deletion by removing the third node (value 30).  
- Prints the list after each operation to show the changes.

---

## (d) Sample Output
- Original Doubly Linked List:
    10 20 30 
- After inserting 25 after 20:
    10 20 25 30 
- After deleting node with value 30:
    10 20 25
