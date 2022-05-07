#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,X,i,Y;

    printf("Number of times : ");
    scanf("%d",&a);

    printf("\nEnter the value of X : ");
    scanf("%d",&X);

    for(i=1;i<a;i++){
        Y=X*X;
    }

    printf("\nDesired value: %d",Y);

    return 0;
}
