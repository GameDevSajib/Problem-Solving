#include<bits/stdc++.h>
#define ll long long
#define finish return 0;
#define start_ int main()
#define do {
#define done }

using namespace std;

struct Node{
   int data;
   struct Node *next;
};

struct Node* Array_to_Linked_List(int arr[],int next)
{
    ///First All values set to Null
    struct Node *head=NULL;
    struct Node *temp=NULL;
    struct Node *current=NULL;
    ///Memory Allocation
    for(int i=0;i<next;i++)
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=NULL;

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
}

int Search_in_linkd_list(struct Node *head,int value)
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
    int arr[6]={2,3,4,5,6,7};
    struct Node *head=NULL;
    head=Array_to_Linked_List(arr,6);
    /*while(head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
    printf("NULL\n");*/
    printf("%d",Search_in_linkd_list(head,7));



 finish
done

