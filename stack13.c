#include<stdio.h>
#define max 50
char str[max];
int top;

char pop()
{
    char k;
    k=str[top];
    top=top-1;
    return k;
}

void push(char c)
    {
        top=top+1;
        str[top]=c;
    }

int main(int argc, char const *argv[])
{
    char c;
    printf("Enter a string :");
    gets(str);

    push(str);
    
    c=pop();

    printf("the new string is : %c",c);
    
    return 0;
}
