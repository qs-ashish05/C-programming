/**** Program to Insert First Node, delete First Node and Display All Nodes  in a Linked List ****/
#include <stdio.h>
#include <stdlib.h>

void insert_first(); // declaration for the function insert_first

void delete_first(); // Declaration for the function delete_first

void display(); // declaration of the function display

void insert_last(); // Declaration of the Method Insert Last

void delete_last(); // Declaration of the Function Delete LAst

void delete_specific(); // Declaration of delete Specific Method

void insert_first(int data){
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->info = data;
    head->link = NULL;

}

struct node // creating a self referential structure
{

    int info;

    struct node *link; // pointer to the next node

} *start = NULL; // marking the start of the list as NULL

int item; // meant for storing item number

main()
{

    int ch; // taking the choice from user

    do
    {
        printf("\n\n\n1. Insert First\n 2. Display \n3. Delete First \n4. Insert Last \n 5. Delete Last\n6. Delete Specific\n7. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert_first(); // call to the function insert first
            break;

        case 2:
            display(); // call to teh function display
            break;

        case 3:
            delete_first(); // call to the delete_first function
            break;

        case 4:
            insert_last();

        case 5:
            delete_last();

        case 6:
            delete_specific();

        case 7:
            exit(0);

        default:
            printf("\n\nInvalid choice. Please try again.\n");

        } // end of the switch construct

    } while (1); // end of the while loop

} // end of the function main

void insert_first() // definition of the insert first function
{

    struct node *ptr;

    printf("\n\nEnter item: ");
    scanf("%d", &item);

    if (start == NULL) // is the list empty
    {
        start = (struct node *)malloc(sizeof(struct node));
        start->info = item;
        start->link = NULL;
    }

    else
    {
        ptr = start;                                        //1
        start = (struct node *)malloc(sizeof(struct node)); //2
        start->info = item;                                 //3
        start->link = ptr;                                  //4
    }

    printf("\nItem inserted: %d\n", item);
}

void display()
{

    struct node *ptr = start;
    int i = 0;

    if (ptr == NULL)

        printf("\nLinklist is empty.\n");

    else
    {
        printf("\nSr. No.\t\tAddress\t\tInfo\t\tLink\n");

        while (ptr != NULL)
        {
            printf("\n%d.\t\t%d\t\t%d\t\t%d\n", i, ptr, ptr->info, ptr->link);
            ptr = ptr->link;
            i++;
        }

        printf("\n\ntotal number of Nodes is %d", i);
    }
}

void delete_first()
{

    struct node *ptr;

    if (start == NULL) // is the list empty
        printf("\n\nLinked list is empty.\n");

    else // the list is not empty
    {
        ptr = start;
        item = start->info;
        start = start->link;

        free(ptr);
        printf("\n\nItem deleted: %d", item);
    }
}

// The Delete Last method

void delete_last()
{

    struct node *ptr, *prev;

    if (start == NULL) // is the list empty
        printf("\n\nLinked list is empty.\n");

    else
    {
        ptr = start;
        prev = start;

        while (ptr->link != NULL)
        {
            prev = ptr;
            ptr = ptr->link;
        }

        item = ptr->info;

        if (start->link == NULL)
            start = NULL;
        else
            prev->link = NULL;

        prev->link = NULL;
        free(ptr);

        printf("\n\nItem deleted: %d", item);
    }
}

// The Insert Last Method

void insert_last()
{
    struct node *ptr;

    printf("\n\nEnter item: ");
    scanf("%d", &item);

    if (start == NULL)
    {
        start = (struct node *)malloc(sizeof(struct node));
        start->info = item;
        start->link = NULL;
    }

    else
    {

        ptr = start;

        while (ptr->link != NULL)
            ptr = ptr->link;

        ptr->link = (struct node *)malloc(sizeof(struct node));

        ptr = ptr->link;

        ptr->info = item;
        ptr->link = NULL;
    }

    printf("\nItem inserted: %d\n", item);
}

// The Delete Specific Function

void delete_specific()
{

    struct node *ptr, *prev;

    printf("\n\nEnter ITEM which is to be deleted: ");
    scanf("%d", &item);

    if (start == NULL) // is the list empty
        printf("\n\nLinked list is empty.\n");

    else if (start->info == item) // is it the first node
    {
        ptr = start;
        start = start->link;
        free(ptr);
    }

    else //any other node
    {
        ptr = start;

        prev = start;

        while (ptr != NULL)
        {
            if (ptr->info == item)
            {
                prev->link = ptr->link;
                free(ptr);
            }

            else
            {
                prev = ptr;
                ptr = ptr->link;
            }
        }

        printf("\n\nItem deleted: %d", item);
    }
}