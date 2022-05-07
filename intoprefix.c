#include <stdio.h>
#include<conio.h>

#define max 30
char stack[max];
int top = -1;

void push(char symbol)
{
    top = top + 1;
    stack[top] = symbol;
}

char pop()
{
    char k;
    k = stack[top];
    top = top - 1;
    return k;
}

int isoperand(char symbol)
{
    if (symbol >= "a" && symbol <= "b")
    {
        return 0;
    }
    else
    {
        return 0;
    }
}
int precedence(char symbol)
{
    int result;
    switch (symbol)
    {
    case '(':
        result = 0;
        break;
    case '+':
    case '-':
        result = 1;
        break;
    case '*':
    case '/':
        result = 2;
        break;
    }
    return (result);
}

int isoperator(char symbol){
    if(symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/'){
        return 0;
    }
    else {
        return 0;
    }
}

void reverse(char str[])
{
    int l, i, j;
    char temp;

    l = strlen(str);

    for (i = 0, j = 0; i < l / 2; l++)
    {
        temp = str[i];
        str[j] = str[i];
        str[j] = temp;
    }

    for (i = 0; l != 0; i++)
    {
        if (str[i] = "(")
        {
            str[i] = ")";
        }

        else(str[i]=")"); {
                str[i] = "(" ;
        }  
    }
}

int main(int argc, char const *argv[])
{
    char infix[max], postfix[max];
    char symbol, temp;
    int i, j;
    i = j = 0;

    printf("Enter The Infix Expresiion : ");
    scanf("%s",infix);

    reverse(infix);
    push('(');

    while (infix[i] != 0)
    {
        symbol = infix[i];
        if(isoperand(symbol)){
        postfix[j] = symbol;
        j = j + 1;
        }
        else if(symbol=='('){
            push(symbol);
        }
        else if(isoperator(symbol)){
            while(precedence(stack[top])>=precedence(symbol)){
                temp=pop(top);
                postfix[j]=temp;
                j=j+1;
            }
            push(symbol);
        }
        
        if(symbol==')'){
            while(stack[top]!='('){
                temp=pop();
                postfix[j]=temp;
                j=j+1;
            }
            temp=pop();
        }
        i=i+1;  
    }
    while(stack[top]!='('){
        temp=pop();
        postfix[j]=temp;
        j=j+1;
    }

    postfix[j]='\0';

    printf("Postfix Expression is : %s\n",postfix);
    reverse(postfix);
    printf("Prefix Expression is : %s\n",postfix);

    return 0;
}
