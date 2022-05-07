#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void add_at_end(struct node *head, int data)
{

    struct node *ptr, *temp;
    ptr = head;

    temp = (struct node *)malloc(sizeof(struct node));

    temp->data = data;
    temp->next = NULL;

    while (ptr->next != NULL)
    {
        //ptr = ptr->next;
        ptr->next = temp;
    }
    ptr->next = temp;
}

struct node *del_from_last(struct node *head)
{
    if (head == NULL)
    {
        printf("Stack is empty");
    }
    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp1 = head;
        struct node *temp2 = head;

        while (temp2->next != NULL)
        {
            temp1 = temp2;
            temp2 = temp2->next;
        }

        temp2->next = NULL;
        free(temp2);

        temp2 = NULL;
    }
    return head;
}

void display(struct node *head)
{

    struct node *ptr = head;

    while (ptr != NULL)
    {
        printf("%5d", ptr->next);
        ptr = ptr->next;
    }
}

int main(int argc, char const *argv[])
{
    int input, data;

    // To create first node
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = NULL;

    //add_at_end(head, 20);
    // add_at_end(head, 30);

    printf(" Menu  \n 1.Push \n 2.Pop \n 3.Display \n 4.Exit");
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        printf("Enter a data :");
        scanf("%d", &data);
        add_at_end(head, data);

        break;

    case 2:
        del_from_last(head);
        break;
    case 3:
        display(head);
        break;
    case 4:
        exit;
        break;
    default:
        break;
    }

    display(head);
    return 0;
}