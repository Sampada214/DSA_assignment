#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push operation
void push(char ch)
{
    if (top < MAX - 1)
        stack[++top] = ch;
}

// Pop operation
char pop()
{
    if (top != -1)
        return stack[top--];
    return '\0';
}

// Function to check if parentheses are balanced
int Balanced(char expr[])
{
    int i;
    char ch, topChar;

    for (i = 0; expr[i] != '\0'; i++)
    {
        ch = expr[i];

        // Push opening brackets
        if (ch == '(' || ch == '{' || ch == '[')
        {
            push(ch);
        }
        // Check closing brackets
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            if (top == -1)
                return 0; // Stack empty → unbalanced

            topChar = pop();

            // Mismatch check
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '['))
                return 0; // Unbalanced
        }
    }

    // If stack is empty → balanced
    return (top == -1);
}

int main()
{
    char expr[MAX];

    printf("Enter expression: ");
    fgets(expr, MAX, stdin);                  // safer input
    expr[strcspn(expr, "\n")] = 0;           // remove trailing newline

    if (Balanced(expr))
        printf("Balanced Parentheses\n");
    else
        printf("Not Balanced Parentheses\n");

    return 0;
}
