#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;

    printf("Enter a character :");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a'&&'A'&&'e':
        printf("%c is a vowel", ch);
        break;
   
        
    default:
        printf("%c is not a vowel", ch);
    }

    return 0;
}
