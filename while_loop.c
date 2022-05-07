#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    while (i < 30)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

/*
syntax of while loop --> while(Condition){
                          //code
                          }
no need of semicolon after }
code to print numbers from 0 to 30
....................................
int i;                             
    while (i < 30)                 
    {                              
        printf("%d\n", i+1);         
        i = i + 1;                 
    }                              
                                    
    return 0;
 ..................................
*/