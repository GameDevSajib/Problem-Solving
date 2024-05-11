#include<bits/stdc++.h>
#define ll long long
#define len 10
using namespace std;


typedef struct{
   int top;
   int data[len];
}Stack;

void push(Stack *s,int item)
{
    if(s->top <len)
    {
       s->data[s->top]=item;
       s->top=s->top+1;

    }
    else{
        cout<<"stack is full"<<endl;
    }
}

int pop(Stack *s)
{
   int item;
   if(s->top==0)
   {
       return -1;
   }
   else{
         s->top=s->top-1;
         item=s->data[s->top];
   }
   return item;
}





int main()
{
     Stack my_stack;
     int item;
     my_stack.top=0;

     push(&my_stack,1);
     push(&my_stack,2);
     push(&my_stack,3);


     item=pop(&my_stack);
     cout<<item<<endl;
     item=pop(&my_stack);
     cout<<item<<endl;
     item=pop(&my_stack);
     cout<<item<<endl;



    return 0;
}
