#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main(int argc, char const *argv[])
{
    struct node a,b,c;

    a.data=10;     // 
    b.data=20;
    c.data=30;

   a.link=b.link=c.link=NULL;

   a.link=&a.data;
   b.link=&c.data;
  
  while (node!=NULL)
  {
      /* code */
  }
  
    return 0;
}

