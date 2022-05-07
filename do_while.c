#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num,max;
    num=0;
    printf("Enter a number : ");
    scanf("%d",&max);
    do
    {
        
        printf("%d",num);
        num=num+1;
    } while (num<max);
    

    return 0;
}
/* syntax of do while loop 
do {
   **** code ****
   } while (Condition)

EXAMPLE :  
    int i=0;
    do
    {
        i=i+1;
        printf("%d\n",i);
    } while (i<10);
    
    return 0;
 OUTPUT : 1 to 10 numbers.
 NOTE : "do while loop executes atleast once";;;;
 prgm : to print numbers upto user entered value 
    int num,max;
    num=0;
    printf("Enter a number : ");
    scanf("%d",&max);
    do
    {
        
        printf("%d",num);
        num=num+1;
    } while (num<max);
    
 */