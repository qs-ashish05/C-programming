#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    for(i=1;;i++)
    {
      printf("%d\n",i);
    }
    return 0;
}









/* if we don't use terminating statement or condition 
in our code then the for loop will run for infinite times
types of loops (1) for loop 
 (2) while loop 
 (3) do while loop 
 ^*^*^**^*^*^**^*^*^*^*^*^*
 ^*^*^**^*^*^**^*^*^*^*^*^*
 ^*^*^**^*^*^**^*^*^*^*^*^*
 difference between break and continue.
 break ke bad vo loop ke bahar aa jana h aur bad me phir kabhi bhi loop ko
 execute nhi krna h 
 lekin ahar hamne continue ka use kiya tho vo loop se toh bhar aa jayega 
 but vo phir se use loop ko execute krna suru kr dega ....
               
*/