# DSA Assignment 2 – Question 2

## Program: Infix to Postfix Conversion and Evaluation (C Language)

This program converts a given **infix mathematical expression** into its **postfix form** and then evaluates the postfix expression to produce the final result.  
The program supports **multi-digit operands**, arithmetic operators, and parentheses.  
A **stack data structure** is used for both conversion and evaluation.

---

## (a) Explanation of Data Structures

The primary data structure used in this program is a **stack**.

- A character stack is used during **infix to postfix conversion** to temporarily store operators and parentheses.
- An integer stack is used during **postfix evaluation** to store operands and intermediate results.
- The stack follows the **LIFO (Last In First Out)** principle, which is essential for maintaining correct operator precedence and evaluation order.

---

## (b) Description of the Functions Implemented

- **push()**  
  Inserts an element (operator or operand) onto the top of the stack.

- **pop()**  
  Removes and returns the top element from the stack.

- **precedence()**  
  Returns the precedence level of an operator to decide the correct order during infix to postfix conversion.

- **infixToPostfix()**  
  Converts the given infix expression into postfix form using a stack while considering operator precedence and parentheses.

- **evaluatePostfix()**  
  Evaluates the postfix expression by processing operands and operators using a stack and returns the final result.

---

## (c) Overview of the `main()` Method

- Accepts an infix mathematical expression from the user.
- Calls the infix-to-postfix conversion function.
- Displays the converted postfix expression.
- Evaluates the postfix expression using a stack.
- Prints the final evaluated result of the expression.

---

## (d) Sample Output
Enter infix expression: (12+8)*3
Postfix expression: 12 8 + 3 *
Evaluation result: 60
