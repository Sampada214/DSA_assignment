# DSA Assignment 2 – Question 1

## Balanced Parentheses Program (Using Stack in C)

### About the Program
This program checks whether a given mathematical expression has balanced parentheses or not.  
It works with different types of brackets such as `()`, `{}`, and `[]`.

---

## a. Data Structures
- **`stack[]`**: An array used to store all the opening brackets encountered in the expression.  
- **`top`**: An integer indicating the current top position of the stack.

---

## b. Function Implementations
- **`push(char ch)`** – Adds an opening bracket to the stack.  
- **`pop()`** – Removes the top element from the stack and returns it.  
- **`isBalanced(char expr[])`** – Checks the given expression for balanced parentheses by traversing it, using the stack to match opening and closing brackets. Returns `true` if the expression is balanced, otherwise `false`.

---

## c. Overview of 'main()'
- Reads a mathematical expression from the user.
- Removes the trailing newline from the input (if any).
- Calls the isBalanced() function to check whether the expression has balanced parentheses.
- Prints the result: either “Balanced Parentheses” or “Not Balanced Parentheses.”

---

## d. output 

## d. Example Output

| Input Expression                  | Output          |
|----------------------------------|------------------|
| `a + (b - c) * (d`                | Not Balanced    |
| `m + [a - b * (c + d * {m)]`      | Not Balanced    |
| `a + (b - c)`                     | Balanced        |
