# DSA Assignment 2 – Undirected Graph Traversal

## Program: Implementation of Undirected Graph Using Adjacency Matrix with BFS and DFS (C)

This program implements an **undirected graph** using an **adjacency matrix** representation.  
It also demonstrates **Breadth First Search (BFS)** and **Depth First Search (DFS)** traversal techniques.  
The user provides the number of vertices, number of edges, and the edge connections as input.

---

## (a) Explanation of How the Data Structures Are Defined

- The graph is represented using a **2D array (adjacency matrix)**.
- If the graph has `n` vertices, the adjacency matrix is of size `n × n`.
- Each cell `graph[i][j]` represents the presence or absence of an edge:
  - `graph[i][j] = 1` → an edge exists between vertex `i` and vertex `j`
  - `graph[i][j] = 0` → no edge exists
- Since the graph is **undirected**, for every edge `(u, v)`, both `graph[u][v]` and `graph[v][u]` are set to 1.
- An array `visited[]` is used in both BFS and DFS to track which vertices have already been visited.
- A queue implemented using an array is used for BFS traversal.

---

## (b) Description of the Functions Implemented

- **enqueue()**  
  Inserts a vertex into the queue during BFS traversal.

- **dequeue()**  
  Removes and returns a vertex from the queue during BFS traversal.

- **DFS()**  
  Traverses the graph using the Depth First Search technique by recursively visiting unvisited adjacent vertices.

- **BFS()**  
  Traverses the graph using the Breadth First Search technique by visiting vertices level by level using a queue.

---

## (c) Overview of the `main()` Method

- The `main()` function first asks the user to enter the number of vertices and edges.
- It initializes the adjacency matrix with all values set to zero.
- The user enters each edge as a pair of vertices `(u, v)`, and the adjacency matrix is updated accordingly.
- The adjacency matrix is displayed to show the graph representation.
- DFS traversal is performed starting from vertex `0`.
- BFS traversal is then performed starting from vertex `0`.
- The traversal order is printed on the screen.

---

## (d) Sample Output
- Enter number of vertices: 3
- Enter number of edges: 3
- Enter edges (u v):
- 0 1
- 1 2
- 2 0

- Adjacency Matrix:
- 0 1 1
- 1 0 1
- 1 1 0

- DFS Traversal starting from vertex 0:
- 0 1 2
- BFS Traversal starting from vertex 0:
- 0 1 2