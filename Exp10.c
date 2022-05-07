#include <stdio.h>

int Bit[4];
int a, b, i;

void addition(int a, int b)
{
    int A = a;
    int B = b;

    int sum = A + B;
    printf("\nsum is : %d\n", sum);

} //Addition

void Subtarction(int a, int b)
{

    int A = a;
    int B = b;

    int diff = A - B;
    printf("\nDifference is : %d", diff);

} //Difference

void increment(int a)
{

    int A = a;

    printf("\nValue after Increment by one is : %d", A + 1);
} // Increment

void decrement(int a)
{

    int A = a;

    printf("Opertation : Decrement\n");

    printf("\nValue after Decrement by one is : %d", A - 1);
} // Decrement

int transfer(int a)
{
    int A = a;

    int B = A;

    return B;
} //transfer

void Multiply(int a, int b)
{

    int A = a;
    int B = b;

    int M = a * b;

    printf("\nMultiplication of A and B is %d :", M);
} // multiply

void complement(int a)
{
    int B[4], i;
    int n = a;

    for (i = 0; n > 0; i++)
    {
        B[i] = n % 2;
        n = n / 2;
    }
    printf("\nBinary of Given Number is=");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", B[i]);
    }

    for (i = i - 1; i >= 0; i--)
    {
        if (B[i] == 0)
        {
            B[i] = 1;
        }
        if (B[i] == 1)
        {
            B[i] = 0;
        }
        printf("\nComplement of this Number = ");
        for (i = i - 1; i >= 0; i--)
        {
            printf("%d", B[i]);
        }
    }

} // complement

void AND(int a, int b)
{

    // Converting A into binary
    int A[4], i;
    int n = a;

    for (i = 0; n > 0; i++)
    {
        A[i] = n % 2;
        n = n / 2;
    }
    printf("\nBinary of A is=");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", A[i]);
    }

    // converting B into binary
    int B[4], j;
    int n1 = b;

    for (j = 0; n1 > 0; j++)
    {
        B[j] = n1 % 2;
        n1 = n1 / 2;
    }
    printf("\nBinary of B is=");
    for (j = j - 1; j >= 0; j--)
    {
        printf("%d", B[j]);
    }

    printf("\nA AND B = ");

    // To perform AND opertaion

    int z = 0;
    for (z = 0; z < 4; z++)
    {

        if (A[i] == 1 && B[j] == 1)
        {
            printf("1");
        }

        if ((A[i] == 1 && B[j] == 0) || (A[i] == 0 && B[j] == 1) || (A[i] == 0 && B[j] == 0))
        {
            printf("0");
        }
        i++;
        j++;
    }
} //AND

void OR(int a, int b)
{

    // Converting A into binary
    int A[4], i;
    int n = a;

    for (i = 0; n > 0; i++)
    {
        A[i] = n % 2;
        n = n / 2;
    }
    printf("\nBinary of A is=");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", A[i]);
    }

    // converting B into binary
    int B[4], j;
    int n1 = b;

    for (j = 0; n1 > 0; j++)
    {
        B[j] = n1 % 2;
        n1 = n1 / 2;
    }
    printf("\nBinary of B is=");
    for (j = j - 1; j >= 0; j--)
    {
        printf("%d", B[j]);
    }

    printf("\nA OR B = ");

    // To perform AND opertaion

    int z = 0;
    for (z = 0; z < 4; z++)
    {

        if (A[i] == 1 && B[j] == 1)
        {
            printf("1");
        }

        if ((A[i] == 1 && B[j] == 0) || (A[i] == 0 && B[j] == 1))
        {
            printf("1");
        }

        if ((A[i] == 0 && B[j] == 0))
        {
            printf("0");
        }
        i++;
        j++;
    }
} //OR

void NAND(int a, int b)
{

    // Converting A into binary
    int A[4], i;
    int n = a;

    for (i = 0; n > 0; i++)
    {
        A[i] = n % 2;
        n = n / 2;
    }
    printf("\nBinary of A is=");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", A[i]);
    }

    // converting B into binary
    int B[4], j;
    int n1 = b;

    for (j = 0; n1 > 0; j++)
    {
        B[j] = n1 % 2;
        n1 = n1 / 2;
    }
    printf("\nBinary of B is=");
    for (j = j - 1; j >= 0; j--)
    {
        printf("%d", B[j]);
    }

    printf("\nA NAND B = ");

    // To perform AND opertaion

    int z = 0;
    for (z = 0; z < 4; z++)
    {

        if (A[i] == 1 && B[j] == 1)
        {
            printf("0");
        }

        if ((A[i] == 1 && B[j] == 0) || (A[i] == 0 && B[j] == 1) || (A[i] == 0 && B[j] == 0))
        {
            printf("1");
        }
        i++;
        j++;
    }
} //NAND

void NOR(int a, int b)
{

    // Converting A into binary
    int A[4], i;
    int n = a;

    for (i = 0; n > 0; i++)
    {
        A[i] = n % 2;
        n = n / 2;
    }
    printf("\nBinary of A is=");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", A[i]);
    }

    // converting B into binary
    int B[4], j;
    int n1 = b;

    for (j = 0; n1 > 0; j++)
    {
        B[j] = n1 % 2;
        n1 = n1 / 2;
    }
    printf("\nBinary of B is=");
    for (j = j - 1; j >= 0; j--)
    {
        printf("%d", B[j]);
    }

    printf("\nA NOR B = ");

    // To perform AND opertaion
    int z = 0;
    for (z = 0; z < 4; z++)
    {

        if (A[i] == 1 && B[j] == 1)
        {
            printf("0");
        }

        if ((A[i] == 1 && B[j] == 0) || (A[i] == 0 && B[j] == 1))
        {
            printf("0");
        }

        if ((A[i] == 0 && B[j] == 0))
        {
            printf("1");
        }
        i++;
        j++;
    }
} //NOR

void XOR(int a, int b)
{

    // Converting A into binary
    int A[4], i;
    int n = a;

    for (i = 0; n > 0; i++)
    {
        A[i] = n % 2;
        n = n / 2;
    }
    printf("\nBinary of A is=");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", A[i]);
    }

    // converting B into binary
    int B[4], j;
    int n1 = b;

    for (j = 0; n1 > 0; j++)
    {
        B[j] = n1 % 2;
        n1 = n1 / 2;
    }
    printf("\nBinary of B is=");
    for (j = j - 1; j >= 0; j--)
    {
        printf("%d", B[j]);
    }

    printf("\nA XOR B = ");

    // To perform AND opertaion
    int z = 0;
    for (z = 0; z < 4; z++)
    {

        if (A[i] == 1 && B[j] == 1)
        {
            printf("0");
        }

        if ((A[i] == 1 && B[j] == 0) || (A[i] == 0 && B[j] == 1))
        {
            printf("1");
        }

        if ((A[i] == 0 && B[j] == 0))
        {
            printf("0");
        }
        i++;
        j++;
    }
} //XOR

void XNOR(int a, int b)
{

    // Converting A into binary
    int A[4], i;
    int n = a;

    for (i = 0; n > 0; i++)
    {
        A[i] = n % 2;
        n = n / 2;
    }
    printf("\nBinary of A is=");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", A[i]);
    }

    // converting B into binary
    int B[4], j;
    int n1 = b;

    for (j = 0; n1 > 0; j++)
    {
        B[j] = n1 % 2;
        n1 = n1 / 2;
    }
    printf("\nBinary of B is=");
    for (j = j - 1; j >= 0; j--)
    {
        printf("%d", B[j]);
    }

    printf("\nA XOR B = ");

    // To perform AND opertaion
    int z = 0;
    for (z = 0; z < 4; z++)
    {

        if (A[i] == 1 && B[j] == 1)
        {
            printf("1");
        }

        if ((A[i] == 1 && B[j] == 0) || (A[i] == 0 && B[j] == 1))
        {
            printf("0");
        }

        if ((A[i] == 0 && B[j] == 0))
        {
            printf("1");
        }
        i++;
        j++;
    }
} //XNOR

void ALU(int p, int q)
{

    int a = p;
    int b = q;

    int trans;
    printf(" Enter the Bits value");
    for (i = 0; i < 4; i++)
    {
        printf("\nEnter S%d : ", i);
        scanf("%d", &Bit[i]);
    }

    if (Bit[0] == 0 && Bit[1] == 0 && Bit[2] == 0 && Bit[3] == 0)
    { //1
        printf("Opertation : Addition\n");
        addition(a, b);
    }

    if (Bit[0] == 0 && Bit[1] == 0 && Bit[2] == 0 && Bit[3] == 1)
    { //2
        printf("Opertation : Subtraction\n");
        Subtarction(a, b);
    }

    if (Bit[0] == 0 && Bit[1] == 0 && Bit[2] == 1 && Bit[3] == 0)
    { //3
        printf("Opertation : Increment A\n");
        increment(a);
    }

    if (Bit[0] == 0 && Bit[1] == 0 && Bit[2] == 1 && Bit[3] == 1)
    { //4
        printf("Opertation : Decrement A\n");
        decrement(a);
    }

    if (Bit[0] == 0 && Bit[1] == 1 && Bit[2] == 0 && Bit[3] == 0)
    { //5
        printf("Opertation : Increment B\n");
        increment(b);
    }

    if (Bit[0] == 0 && Bit[1] == 1 && Bit[2] == 0 && Bit[3] == 1)
    { //6
        printf("Opertation : Decrement B\n");
        decrement(b);
    }

    if (Bit[0] == 0 && Bit[1] == 1 && Bit[2] == 1 && Bit[3] == 0)
    { //7
        printf("Opertation : Transfer A into B\n");
        printf("\nB before Transfer : %d", b);

        trans = transfer(a);

        printf("\nB after Transfer :%d", trans);
        transfer(a);
    }

    if (Bit[0] == 0 && Bit[1] == 1 && Bit[2] == 1 && Bit[3] == 1)
    { //8
        printf("Opertation : Multiplication\n");
        Multiply(a, b);
    }

    if (Bit[0] == 1 && Bit[1] == 0 && Bit[2] == 0 && Bit[3] == 0)
    { //9
        printf("Opertation : A Complement\n");
        complement(a);
    }

    if (Bit[0] == 1 && Bit[1] == 0 && Bit[2] == 0 && Bit[3] == 1)
    { //10
        printf("Opertation : B Complement\n");
        complement(b);
    }

    if (Bit[0] == 1 && Bit[1] == 0 && Bit[2] == 1 && Bit[3] == 0)
    { //11
        printf("Opertation : A AND B \n");
        AND(a, b);
    }

    if (Bit[0] == 1 && Bit[1] == 0 && Bit[2] == 1 && Bit[3] == 1)
    { //12
        printf("Opertation : A OR B \n");
        OR(a, b);
    }
    if (Bit[0] == 1 && Bit[1] == 1 && Bit[2] == 0 && Bit[3] == 0)
    { //13
        printf("Opertation : A NAND B \n");
        NAND(a, b);
    }
    if (Bit[0] == 1 && Bit[1] == 1 && Bit[2] == 0 && Bit[3] == 1)
    { //14
        printf("Opertation : A NOR B \n");
        NOR(a, b);
    }
    if (Bit[0] == 1 && Bit[1] == 1 && Bit[2] == 1 && Bit[3] == 0)
    { //15
        printf("Opertation : A XOR B \n");
        XOR(a, b);
    }
    if (Bit[0] == 1 && Bit[1] == 1 && Bit[2] == 1 && Bit[3] == 1)
    { //16
        printf("Opertation : A XNOR B \n");
        XNOR(a, b);
    }
}

int main(int argc, char const *argv[])
{
    int a, b, C = 0;

    printf("Enter A :");
    scanf("%d", &a);

    printf("\nEnter B :");
    scanf("%d", &b);

    if (a > 15 || b > 15)
    {
        printf("Invalid Input");
    }
    else
    {

        for (C = 0; C != 2;)
        {
            printf("\n 1.Continue \n 2.Exit \n");
            printf("\nYour Choice : ");

            scanf("%d", &C);
            ALU(a, b);
        }
    }

    return 0;
} // main