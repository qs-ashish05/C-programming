// EXp-04

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define size 50
int queue[size];
int front = -1, rear = -1, data;

int isfull()
{
    if (rear = size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty()
{
    if (((front == -1) && (rear = -1)) || (front > rear))
    { // rear!=size-1
        return 1;
    }
    else
    {
        return 0;
    }
}
void Enqueue()
{

    int elem, i, num;
    printf("How many element you want to Enqueue : ");
    scanf("%d", &num);

    // for number of inputs
    for (i = 0; i < num; i++)
    {
        printf("Enter element you want to Enqueue : ");
        scanf("%d", &elem);
    }

    if (isfull())
    {
        printf("Queue is full");
    }
    else
    {

        if (front == -1 && rear == -1)
        { //very first time

            front++;
            rear++;
            queue[front] = elem;
        }
        else
        { // not very first time
            rear++;
            queue[rear] = elem;
        }
        // printf(" Element Inserted : %d", elem);
    }
}

int Dequeue()
{

    int temp;

    if (isempty())
    {
        printf("Queue is empty");
        return 0;
    }
    else
    {
        temp = queue[front];
        if (front == rear)
        {
            front = rear = 0;
        }
        else
        {
            front = front + 1;
        }
    }
    printf("The deleted element is : %d", temp);
    return 0;
}

void display()
{
    int i = 0;
    if (isempty())
    {
        printf("Queue is empty");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("The %d element of queue is : %d", i++, queue[i]);
        }
    }
}

int main(int argc, char const *argv[])
{

    int choise;
    int elem;
    printf("1.Enqueu\n2.Dequeue\n3.display\n4.Exit\n");
    printf("Enter your choise : ");

    scanf("%d", &choise);

    switch (choise)
    {
    case 1:
        Enqueue();
        break;
    case 2:
        Dequeue();
        break;
    case 3:
        display();
        break;
    case 4:
        exit(0);
        break;

    default:
        printf("Not a valid choise");
        break;
    }
    return 0;
}