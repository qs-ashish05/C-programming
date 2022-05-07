#include <stdio.h>
#include <ctype.h>
#define SIZE 50

char s[SIZE];

int top = -1;

push(char elem)
{
    top++;
    s[top] = elem;
}

char pop()
{
    int val = s[top];
    top--;
    return val;
}

int pr(char oprtr)
{
    switch (oprtr)

    {
    case '#':
        return 0;

    case '(':
        return 1;

    case '+':
    case '-':
        return 2;

    case '*':
    case '/':
        return 3;
    }
}
int main(int argc, char const *argv[])
{
    char infix[50], postfix[50], ch, elem;

    int i = 0, k = 0;

    printf("\n\nEnter a valid infix expression : ");

    scanf("%s", infix);

    push('#');

    while ((ch = infix[i++]) != '\0')
    {

        if (ch == '(')
            push(ch);

        else if (isalnum(ch))
            postfix[k++] = ch;

        else if (ch == ')')
        {
            while (s[top] != '(')
                postfix[k++] = pop();
            elem = pop();
        }

        else
        {

            while (pr(s[top]) >= pr(ch))
                postfix[k++] = pop();

            push(ch);
        }
    }

    while (s[top] != '#') /* Pop from stack till empty */

        postfix[k++] = pop();
    postfix[k] = '\0'; /* Make pofx as valid string */
    printf("\nGiven Infix Expression: %s \n", infix);
    printf("Required Postfix Expression : %s\n", postfix);

    return 0;
}
