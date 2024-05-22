#include<stdio.h>
#include<stdlib.h>

struct Node{

     int data;
     struct Node *next;
};
int main()
{

    struct Node *a=NULL;
    struct Node *b=NULL;
    struct Node *c=NULL;

    ///allocate the space
    a=(struct Node *)malloc(sizeof(struct Node));
    b=(struct Node *)malloc(sizeof(struct Node));
    c=(struct Node *)malloc (sizeof(struct Node));

    ///assigning the values
    a->data=10;
    b->data=20;
    c->data=30;

    ///i want to connect this [a->b->c->NULL] order
    a->next=b;
    b->next=c;
    c->next=NULL;

    ///Now we will traverse
    while(a!=NULL)
    {
        printf("%d\n",a->data);
        a=a->next;///something like i++ but here we are saying you go your next


    }


    return 0;
}
