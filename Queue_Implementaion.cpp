// Program for Implementing Queue using Array
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 50

void insert();
void delet();
void display();

int queue[MAX],rear=-1,front=-1,item;

int main()
{
     int ch;
     
     do
     {
         printf("\n\n1.Insert\n2 Delete\n3.Display\n4.Exit\n\n");
         printf("Enter your choice\n");
         scanf("%d",&ch);
     
         switch(ch)
         {
                  case 1:
                       insert();
                       break;
            
                  case 2:
                       delet();
               
                       break;
                  case 3:
                       display();
                     break;
                     case 4:
                      exit(0);
                      default:
                          printf("Invalid choice, Please try again\n");                 
                           }
             }while(1); 
           // getch();
}

void insert()
{
   if(rear==MAX-1) // condition for Queue Full
      printf("Queue is Full\n"); 
   else
   {
   printf("\n\n Enter item\n");
   scanf("%d",&item);
   
    if(rear == -1 && front ==-1  ) // is Queue Empty
     {
                     rear=0;
                     front=0;    
    }  
                     else              // otherwise
                     rear++;

           queue[rear]=item; // adding element to Queue
        printf("\n\n Item Inseted :%d",item);
   }    

   } // end insert

void delet()
{
     if((front==-1)||(front>rear)) // Queue is empty
         printf( "\nQueue is empty\n");
        else //  it has element 
     {
         item = queue[front];



            if(front==rear) // the element is the last element
         {
         front = -1 ;
         rear=-1;               
         }    
         else  // not the last element
         front++;
     printf("\n\n Item deleted: %d ",item);
     }
      
} // end of delet function



void display()
{
      int i;
     if( front ==-1)
         printf("\nQueue is empty\n");
     else
     {   
         printf("\n\n");
         
         for(i = front; i<=rear ; i++)
         printf("    %d",queue[i]);
     }
} // end display function
