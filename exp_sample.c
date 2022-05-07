#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

// Creating Linkrd List
void create(int arr[], int n)
{
    struct Node *temp, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    temp = first;
    temp->data = arr[0];
    temp->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        temp->next = (struct Node *)malloc(sizeof(struct Node));
        temp = temp->next;
        temp->data = arr[i];
        last = temp;
        // last->next = NULL;
        temp->next = NULL;
    }
}

// Displaying Linked List
void display(struct Node *q)
{
    q = first;
    while (q != NULL)
    {
        printf("%d\n", q->data);
        q = q->next;
    }
}
int countingnodes(struct Node *q)
{
    int nod = 0;
    while (q != NULL)
    {
        q = q->next;
        nod++;
    }
    return nod;
}
void inserting(struct Node *q, int pos, int value)
{
    if (pos < 1 || pos > countingnodes(first))
    {
        printf("Invalid Position\nInsertion unsuccessful");
        return;
    }
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->next = NULL;
    p->data = value;
    for (int i = 2; i < pos; i++)
    {
        q = q->next;
    }
    if (pos == 1)
    {
        p->next = q;
        first = p;
    }
    else
    {
        p->next = q->next;
        q->next = p;
    }
    printf("Insertion successful\n");
}

int main()
{
    int arr[5] = {14, 28, 34, 43, 12};
    create(arr, 5);
    inserting(first, -5, 54);
    display(first);

    return 0;
}