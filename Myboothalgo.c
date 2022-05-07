#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Convert_to_binary(int x)
{

    int a[10], b, i;
    b = x;
    if(b>0){
    for (i = 0; b > 0; i++)
    {
        a[i] = b % 2;
        b = b / 2;
    }
    printf("\nBinary of First Number is=");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    }
    else{
        for (i = 0; b < 0; i++)
    {
        a[i] = b % 2;
        b = b / 2;
    }
    printf("\nBinary of First Number is=");
    for (i = i - 1; i >= 0; i--)
    {
        if(a[i]==1)
        printf("%d", 0);
        if(a[i]==0)
        printf("%d", 1);
    }

    }
}

void take_2s_compl(int x){
    int c = abs(x);


}

int main(int argc, char const *argv[])
{
    int i, j, n1, n2;

    printf("Number must be less than 15\n");
    printf("Enter first number (Positive value): ");
    scanf("%d", &n1);
    Convert_to_binary(n1);
    printf("\nEnter second number (negative value) : ");
    scanf("%d", &n2);
    Convert_to_binary(abs(n2));

    if (n1 > 15 || n2 < -15)
    {
        printf("Invalid inputs");
    }
    else
    {
    }

    return 0;
}
