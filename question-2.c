#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

char stack[MAX];
int top = -1;

/* Stack operations */
void push(char ch)
{
    stack[++top] = ch;
}

char pop()
{
    return stack[top--];
}

/* Operator precedence */
int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

/* Infix to Postfix conversion */
void infixToPostfix(char infix[], char postfix[])
{
    int i, k = 0;
    char ch;

    for (i = 0; infix[i] != '\0'; i++)
    {
        ch = infix[i];

        /* If operand, add to postfix */
        if (isdigit(ch))
        {
            postfix[k++] = ch;
        }
        /* If '(', push to stack */
        else if (ch == '(')
        {
            push(ch);
        }
        /* If ')', pop until '(' */
        else if (ch == ')')
        {
            while (stack[top] != '(')
                postfix[k++] = pop();
            pop(); // remove '('
        }
        /* If operator */
        else
        {
            while (top != -1 && precedence(stack[top]) >= precedence(ch))
                postfix[k++] = pop();
            push(ch);
        }
    }

    /* Pop remaining operators */
    while (top != -1)
        postfix[k++] = pop();

    postfix[k] = '\0';
}

/* Evaluate postfix expression */
int evaluatePostfix(char postfix[])
{
    int i;
    int val1, val2;

    for (i = 0; postfix[i] != '\0'; i++)
    {
        if (isdigit(postfix[i]))
        {
            push(postfix[i] - '0');
        }
        else
        {
            val2 = pop();
            val1 = pop();

            switch (postfix[i])
            {
                case '+': push(val1 + val2); break;
                case '-': push(val1 - val2); break;
                case '*': push(val1 * val2); break;
                case '/': push(val1 / val2); break;
                case '^': push(pow(val1, val2)); break;
            }
        }
    }
    return pop();
}

/* Main function */
int main()
{
    char infix[MAX], postfix[MAX];
    int result;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);

    result = evaluatePostfix(postfix);
    printf("Evaluation result: %d\n", result);

    return 0;
}
