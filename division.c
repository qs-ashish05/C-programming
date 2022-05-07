#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    float sum,x;
     sum=0.00;
    for ( i = 1; i < 10; i++)
    {
      x=i%2;
      printf("%f\n",x);
      sum=sum+x;
    }
    
    printf("sum total of reminders is %f",sum);
    return 0;
}