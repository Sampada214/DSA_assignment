# DSA Assignment 2 – Min Heap and Max Heap

## Program: Building Min Heap and Max Heap from an Unsorted Array (C Language)

This program demonstrates how to construct a **Min Heap** and a **Max Heap** from a given unsorted array.  
Heap construction is done using the **heapify method**, without sorting the array completely.

---

## (a) Explanation of How the Data Structures Are Defined

- The primary data structure used is an **array**.
- The heap is represented using a **binary heap**, which is stored in an array form.
- For a node at index `i`:
  - Left child is located at `2*i + 1`
  - Right child is located at `2*i + 2`
- Two separate arrays are used:
  - One array to build the **Min Heap**
  - Another array to build the **Max Heap**
- This allows both heaps to be built from the same input data without affecting each other.

---

## (b) Description of the Functions Implemented

- **swap()**  
  Exchanges the values of two elements in the array.

- **minHeapify()**  
  Ensures the min heap property by placing the smallest value at the correct position in the subtree.

- **maxHeapify()**  
  Ensures the max heap property by placing the largest value at the correct position in the subtree.

- **buildMinHeap()**  
  Converts an unsorted array into a min heap by applying `minHeapify()` starting from the last non-leaf node.

- **buildMaxHeap()**  
  Converts an unsorted array into a max heap by applying `maxHeapify()` starting from the last non-leaf node.

- **printArray()**  
  Displays the elements of the heap array.

---

## (c) Overview of the `main()` Method

- The `main()` function first asks the user to enter the number of elements.
- It then accepts the unsorted array elements from the user.
- Two copies of the array are created:
  - One for building the min heap
  - One for building the max heap
- The program calls the heap-building functions for both heaps.
- Finally, the min heap and max heap are printed separately.

---

## (d) Sample Output
- Enter number of elements: 5
- Enter array elements:
- 4 10 3 5 1

- Min Heap:
   1 4 3 5 10
- Max Heap:
   10 5 3 4 1
