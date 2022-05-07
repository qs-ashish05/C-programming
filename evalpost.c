#include <stdio.h>
#include<conio.h>

#define max 50
int stack[max];
int top = -1;
void push(int val)
{
    top = top + 1;
    stack[top] = val;
}

int pop()
{
    int k;
    k = stack[top];
    top = top - 1;
    return k;
}
int isoperand(char sym)
{
    if (sym >= 'a' && sym <= 'b')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isoperator(char sym)
{
    if (sym == '+' || sym == '-' || sym == '/' || sym == '*')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    char postfix[max], sym;
    int i = 0, x, val, A, B, C;

    printf("Enter a postfix expresion : \n");
    gets(postfix);

    while (postfix[i] != '\0')
    {
        sym = postfix[i];
        if (isoperand(sym))
        {
            printf("Enter the value of %c : ",sym);
            scanf("%d", &x);
            push(x);
        }
        else (isoperator(sym));
        {
            A = pop();
            B = pop();
            switch (sym)
            {
            case '+':
                C = A + B;
                break;
            case '-':
                C = A - B;
                break;
            case '*':
                C = A * B;
                break;
            case '/':
                C = A / B;
                break;
            }
            push(C);
        i++;
    }
    }
    val = pop();
    printf("The value of postfix expression is : %d", val);
 
    return 0;
    
}
