#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct bin
{
        int data;
        struct bin *left;
        struct bin *right;      
}node; /* The Bnary Tree Structure*/

void insert (node * , node*);
void inorder (node *);
void preorder (node *);
void postorder( node *);
node* get_node();

int main()
{

 int choice;
 char ans = 'n';
 node *New, *root;
 root=NULL;
 
           do
           {
           printf("Program for Implementing simple Binary Tree\n");
           printf("1. Create \n");
           printf("2.Inorder \n");
           printf("3.preorder \n");
           printf("4.Post Order\n");
           printf("5. Exit:\n");
           
           printf("Enter your choice\n");
           scanf("%d",&choice);
           
                         switch(choice)
                         {
                                       
                         case 1: // root==NULL
                         
                              do
                              {
                                    New=get_node();
                                    printf("\nEnter the Element\n");
                                    scanf("%d",&New->data);
                                    
                                    if(root==NULL)
                                    root=New;
                                    
                                    else
                                    insert(root,New);
                                    
                                    printf("\nwant to enter more element? (Y/n)\n");
                                    ans=getche();                                                                                                                                        
                              }while(ans=='y' || ans=='Y'); //close do while
                                       
                         break;
                         
                         case 2:
                              if(root==NULL)
                              printf("\ntree not created\n");
                              else
                              inorder(root);
                              
                         break;
                         
                         case 3:
                              if(root==NULL)
                              printf("\ntree Not created\n");
                              else
                              preorder(root);
                         break;

                         case 4:
                              if(root==NULL)
                              printf("\ntree not created\n");
                              else
                              postorder(root);
                         break;
                         case 5:
                              exit(0); // break out

                  
                  } // closing of switch
           }while(choice!=5);    //closing of while
    
getch();
return(0);
} // end of the function main

// definition to get_node
node* get_node()
{
 node* temp;
 temp= (node *) malloc(sizeof(node));
 temp->left=NULL;
 temp->right=NULL;
 
 return temp;
} // end of the function get_node
     
void insert(node *root,node * New)
{
     char ch;
     printf("Where to insert left/right of %d\n",root->data);
     ch=getche();
     if ((ch=='r')||(ch=='R'))
     {
                 if(root->right==NULL)
                 {
                 root->right=New;
                 }             
                 else
                 insert(root->right,New); // recursively calls insert
     }//end of if
     else
     {
                 if(root->left==NULL)
                 {
                 root->left=New;
                 }             
                 else
                 insert(root->left,New); // recursively calls insert
         
     } //end of else    
}//end of the function insert

// definition to inorder function
void inorder(node *temp)
{
     if(temp!=NULL)
     {
            inorder(temp->left);
            printf("%d\t",temp->data);
            inorder(temp->right);
            printf("\n");              
     }
     
}

// definition to preorder function
void preorder(node *temp)
{
     if(temp!=NULL)
     {
            printf("%d\t",temp->data);
            preorder(temp->left);
            preorder(temp->right);
            printf("\n");              
     }
     
}

// definition to postorder function
void postorder(node *temp)
{
     if(temp!=NULL)
     {
            postorder(temp->left);
            postorder(temp->right);   
            printf("%d\t",temp->data);
            printf("\n");           
     }
     
}
