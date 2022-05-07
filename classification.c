#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c1,c2;
    for (c1 = 'A',c2='z'; c1 < 'z',c2>='a'; c1++,c2--)
    {
        printf("%c%c\t", c1,c2);
    }

    return 0;
}