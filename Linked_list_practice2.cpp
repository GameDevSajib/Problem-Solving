#include<stdio.h>
#include<stdlib.h>
#define do {
#define done }
#define start_ int main()
#define finish return 0;

struct Node{
   int data;
   struct Node* next;

};

///creating a fuintion that will convert the array to the link list
struct Node*sajib(int arr[],int size)
{
    ///first of all make all values to null
    struct Node* head=NULL;
    struct Node* temp=NULL;
    struct Node* current=NULL;
    ///MEMORY ALLOCATION
    ///HRER WE USE A LOOP
    for(int i=0;i<size;i++)
    {
        ///memory allocation done
        temp=(struct Node *) malloc(sizeof(struct Node));
        ///inserting values to data
        temp->data=arr[i];
        ///now ding the opeartion for all the nodes we want
        temp->next=NULL;
        /// if head is empty or nothing
         if(head==NULL)
         {
             head=temp;
             current=temp;
         }
         else{
            current->next=temp;
            current=current->next;
         }

    }
    return head;



};

int search_in_linkedlist(struct Node *head,int value)
{
    int index=1;
    while(head!=NULL)
    {
        if(head->data==value)
        {
           return index;
        }
        index++;
        head=head->next;

    }
    return -1;

}



start_
do
     ///now null all the values
     struct Node *a=NULL;
     struct Node *b=NULL;
     struct Node *c=NULL;

     ///memory allocation
     a=(struct Node *) malloc(sizeof(struct Node));
     b=(struct Node *) malloc(sizeof(struct Node));
     c=(struct Node *) malloc(sizeof(struct Node));
     ///Assigning the values
     a->data=10;
     b->data=20;
     c->data=30;
    ///Now the order is a->b->c->NULL the valus
      a->next=b;
      b->next=c;
      c->next=NULL;
      ///traverse the values
      while(a!=NULL)
      {
          printf("%d\n",a->data);
          a=a->next;

      }


      ///
      int arr[]={10,20,30,40,50};
      struct Node *head=NULL;
      head=sajib(arr,5);

      ///now traverse
      /*printf("Converted values from array\n");
      while(head!=NULL)
      {
         printf("%d\n",head->data);
         head=head->next;
      }
      printf("NULL\n");
*/
      ///Searching in linked list
      struct Node *current=head;
      printf("index: %d",search_in_linkedlist(head,30));


 finish
done
