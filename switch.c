#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("Number is 1");
        break;
        case 2:
        printf("Number is 2");
        break;
        case 3:
        printf("Number is 3");
        break;
        default:
        printf("NOT MATCHED");
    }
    return 0;
}
/* to move inside the arguments of switch statments USE TAB BOTTON
   1. agar hame default statement ko print karwana h toh hame break wali line likhne ki jarurat nhi h 
    1
 */