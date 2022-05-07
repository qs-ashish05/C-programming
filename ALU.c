#include <stdio.h>
int a[4], b[4], s[4], d1 = 0, d2 = 0, r = 0, r1[4];

int main()
{

    printf("Enter the 4-bit binary numbers A and B: \n");

    printf("Enter A:");
    for (int i = 0; i < 4; i++)
    {

        scanf("%d", &a[i]);
    }
    printf("\nEnter B: ");
    for (int i = 0; i < 4; i++)
    {

        scanf("%d", &b[i]);
    }
    printf("\n~~~~~~~~~~~~~~~~	\n");

    printf("0000 - ADD\n0001 - SUB\n0011 - INC A\n0100 - DEC A\n0101 - INC B\n0110 - Transfer A\n0111 - MUL A,B\n1000 - A'\n1001 - B'\n1010 - A AND B\n1011 - A OR B\n1100 - A NAND B\n1101 - A NOR B\n1110 - A XOR B\n1111 - A XNOR B");
    printf("\n\nEnter the 4-bit select line combination:");
    for (int i = 0; i < 4; i++)
    {

        scanf("%d", &s[i]);
    }
    if (a[0] == 1)
    {

        d1 = d1 + 8;
    }
    if (a[1] == 1)
    {

        d1 = d1 + 4;
    }
    if (a[2] == 1)
    {

        d1 = d1 + 2;
    }
    if (a[3] == 1)
    {

        d1 = d1 + 1;
    }

    if (b[0] == 1)
    {

        d2 = d2 + 8;
    }
    if (b[1] == 1)
    {

        d2 = d2 + 4;
    }
    if (b[2] == 1)
    {

        d2 = d2 + 2;
    }
    if (b[3] == 1)
    {

        d2 = d2 + 1;
    }

    //	printf("a = %d; b = %d", d1, d2);
    printf("\n****************\n\n");

    if (s[0] == 0 && s[1] == 0 && s[2] == 0 && s[3] == 0)
    { //add

        r = d1 + d2;
        if (r > 15)
        {
            printf("A + B is:");
            for (int i = 0; i <= 7; i++)
            {
                if (r % 2 == 0)
                {
                    r = r / 2;
                    r1[7 - i] = 0;
                }
                else if (r % 2 == 1)
                {
                    r = r / 2;
                    r1[7 - i] = 1;
                }
            }
            for (int i = 0; i <= 7; i++)
            {
                printf("%d", r1[i]);
            }
        }
        else
        {
            printf("A + B is:");
            for (int i = 0; i <= 3; i++)
            {
                if (r % 2 == 0)
                {
                    r = r / 2;
                    r1[3 - i] = 0;
                }
                else if (r % 2 == 1)
                {
                    r = r / 2;
                    r1[3 - i] = 1;
                }
            }
            for (int i = 0; i <= 3; i++)
            {
                printf("%d", r1[i]);
            }
        }
    }
    if (s[0] == 0 && s[1] == 0 && s[2] == 0 && s[3] == 1)
    { //sub

        r = d1 - d2;
        printf("A - B is :");
        for (int i = 0; i <= 3; i++)
        {
            if (r % 2 == 0)
            {
                r = r / 2;
                r1[3 - i] = 0;
            }
            else if (r % 2 == 1)
            {
                r = r / 2;
                r1[3 - i] = 1;
            }
        }
        for (int i = 0; i <= 3; i++)
        {
            printf("%d", r1[i]);
        }
    }
    if (s[0] == 0 && s[1] == 0 && s[2] == 1 && s[3] == 0)
    { //inc a

        r = d1 + 1;
        printf("Increment A is: ");
        for (int i = 0; i <= 3; i++)
        {
            if (r % 2 == 0)
            {
                r = r / 2;
                r1[3 - i] = 0;
            }
            else if (r % 2 == 1)
            {
                r = r / 2;
                r1[3 - i] = 1;
            }
        }
        for (int i = 0; i <= 3; i++)
        {
            printf("%d", r1[i]);
        }
    }
    if (s[0] == 0 && s[1] == 0 && s[2] == 1 && s[3] == 1)
    { //dec a

        r = d1 - 1;
        printf("Decrement A is: ");
        for (int i = 0; i <= 3; i++)
        {
            if (r % 2 == 0)
            {
                r = r / 2;
                r1[3 - i] = 0;
            }
            else if (r % 2 == 1)
            {
                r = r / 2;
                r1[3 - i] = 1;
            }
        }
        for (int i = 0; i <= 3; i++)
        {
            printf("%d", r1[i]);
        }
    }
    if (s[0] == 0 && s[1] == 1 && s[2] == 0 && s[3] == 0)
    { //inc b

        r = d2 + 1;
        printf("Increment B is: ");
        for (int i = 0; i <= 3; i++)
        {
            if (r % 2 == 0)
            {
                r = r / 2;
                r1[3 - i] = 0;
            }
            else if (r % 2 == 1)
            {
                r = r / 2;
                r1[3 - i] = 1;
            }
        }
        for (int i = 0; i <= 3; i++)
        {
            printf("%d", r1[i]);
        }
    }
    if (s[0] == 0 && s[1] == 1 && s[2] == 0 && s[3] == 1)
    { //dec b

        r = d2 - 1;
        printf("Decrement B is: ");
        for (int i = 0; i <= 3; i++)
        {
            if (r % 2 == 0)
            {
                r = r / 2;
                r1[3 - i] = 0;
            }
            else if (r % 2 == 1)
            {
                r = r / 2;
                r1[3 - i] = 1;
            }
        }
        for (int i = 0; i <= 3; i++)
        {
            printf("%d", r1[i]);
        }
    }
    if (s[0] == 0 && s[1] == 1 && s[2] == 1 && s[3] == 0)
    { //transfer a

        r = d1;

        for (int i = 0; i <= 3; i++)
        {
            if (r % 2 == 0)
            {
                r = r / 2;
                r1[3 - i] = 0;
            }
            else if (r % 2 == 1)
            {
                r = r / 2;
                r1[3 - i] = 1;
            }
        }
        for (int i = 0; i <= 3; i++)
        {
            printf("%d", r1[i]);
        }
    }
    if (s[0] == 0 && s[1] == 1 && s[2] == 1 && s[3] == 1)
    { //axb

        r = d1 * d2;
        printf("%d", r);
        printf("A multiplied by  B is: ");
        for (int i = 0; i <= 7; i++)
        {
            if (r % 2 == 0)
            {
                r = r / 2;
                r1[7 - i] = 0;
            }
            else if (r % 2 == 1)
            {
                r = r / 2;
                r1[7 - i] = 1;
            }
        }
        for (int i = 0; i <= 7; i++)
        {
            printf("%d", r1[i]);
        }
    }
    if (s[0] == 1 && s[1] == 0 && s[2] == 0 && s[3] == 0)
    { //a`

        for (int i = 0; i < 4; i++)
        {
            if (a[i] == 1)
            {
                a[i] = 0;
            }
            else
                a[i] = 1;
        }
        printf("The complemented value A is: ");
        for (int i = 0; i < 4; i++)
        {
            printf("%d", a[i]);
        }
    }
    if (s[0] == 1 && s[1] == 0 && s[2] == 0 && s[3] == 1)
    { //b`
        for (int i = 0; i < 4; i++)
        {
            if (b[i] == 1)
            {

                b[i] = 0;
            }
            else
                b[i] = 1;
        }
        printf("The complemented value of B is: ");
        for (int i = 0; i < 4; i++)
        {
            printf("%d", b[i]);
        }
    }
    if (s[0] == 1 && s[1] == 0 && s[2] == 1 && s[3] == 0)
    { //AND
        for (int i = 0; i <= 3; i++)
        {

            if (a[i] == b[i] && a[i] != 0 && b[i] != 0)
            {
                r1[i] = 1;
            }
            else
            {
                r1[i] = 0;
            }
        }
        printf("A AND B: ");
        for (int i = 0; i < 4; i++)
        {
            printf("%d", r1[i]);
        }
    }
    if (s[0] == 1 && s[1] == 0 && s[2] == 1 && s[3] == 1)
    { //OR
        for (int i = 0; i <= 3; i++)
        {

            if (a[i] == 0 && b[i] == 0)
            {
                r1[i] = 0;
            }
            else
            {
                r1[i] = 1;
            }
        }
        printf("A OR B: ");
        for (int i = 0; i < 4; i++)
        {
            printf("%d", r1[i]);
        }
    }
    if (s[0] == 1 && s[1] == 1 && s[2] == 0 && s[3] == 0)
    { //NAND
        for (int i = 0; i < 4; i++)
        {
            if (a[i] == 1 && b[i] == 1)
            {
                r1[i] = 0;
            }
            else
            {
                r1[i] = 1;
            }
        }
        printf("A NAND B: ");
        for (int i = 0; i < 4; i++)
        {
            printf("%d", r1[i]);
        }
    }
    if (s[0] == 1 && s[1] == 1 && s[2] == 0 && s[3] == 1)
    { //NOR
        for (int i = 0; i <= 3; i++)
        {

            if (a[i] == 0 && b[i] == 0)
            {
                r1[i] = 1;
            }
            else
            {
                r1[i] = 0;
            }
        }
        printf("A NOR B: ");
        for (int i = 0; i < 4; i++)
        {
            printf("%d", r1[i]);
        }
    }
    if (s[0] == 1 && s[1] == 1 && s[2] == 1 && s[3] == 0)
    {
        for (int i = 0; i <= 3; i++)
        {
            if (a[i] != b[i])
            {
                r1[i] = 1;
            }
            else
            {
                r1[i] = 0;
            }
        }
        printf("A XOR B: ");
        for (int i = 0; i < 4; i++)
        {
            printf("%d", r1[i]);
        }
    }
    if (s[0] == 1 && s[1] == 1 && s[2] == 1 && s[3] == 1)
    { //exnor
        for (int i = 0; i <= 3; i++)
        {
            if (a[i] != b[i])
            {
                r1[i] = 0;
            }
            else
            {
                r1[i] = 1;
            }
        }
        printf("A XNOR B: ");
        for (int i = 0; i < 4; i++)
        {
            printf("%d", r1[i]);
        }
    }

    printf("\n\n%d", r);
}