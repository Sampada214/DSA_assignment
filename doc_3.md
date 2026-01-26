# DSA Assignment 2 – Question 3

## Program: Reverse Traversal of Singly Linked List (C Language)

This program demonstrates **normal and reverse traversal** of a singly linked list.  
The program first prints the list in **normal order**, then prints it in **reverse order** using recursion.  
It uses a **stack-like behavior of the function call stack** for reverse traversal.

---

## (a) Explanation of Data Structures

- The primary data structure used is a **singly linked list**.  
- Each node contains:
  - `data` → stores the value of the node
  - `next` → pointer to the next node
- Reverse traversal uses **recursion**, which leverages the **function call stack** to print elements in reverse order without modifying the linked list.

---

## (b) Description of Functions Implemented

- **createNode(value)**  
  Creates a new node with the given value and returns its pointer.

- **insertEnd(&head, value)**  
  Inserts a new node with the given value at the end of the linked list.

- **normalTraversal(head)**  
  Traverses the linked list from head to tail and prints the data in normal order.

- **reverseTraversal(head)**  
  Traverses the linked list recursively and prints the data in reverse order.

---

## (c) Overview of the `main()` Method

- Initializes an empty linked list.  
- Inserts multiple nodes into the linked list using `insertEnd()`.  
- Calls `normalTraversal()` to display the list in normal order.  
- Calls `reverseTraversal()` to display the list in reverse order.  

---

## (d) Sample Output
- Normal traversal of linked list:
    10 20 30 40
- Reverse traversal of linked list:
    40 30 20 10
