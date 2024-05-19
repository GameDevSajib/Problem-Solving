#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define do {
#define done }
#define start_ int main()
#define finish return 0;

using namespace std;

int ck_balance_bracket(char input[])
{
   char c[100005];
   ll top=0;
   int last_char;
   for(ll i=0;i<strlen(input);i++)
   {
       if(input[i]=='(')
       {
           c[top]='(';
           top++;
       }
       else if(input[i]==')')
       {
           if(top==0)
           {
               finish
           }
           top--;
           last_char=c[top];
           if(last_char!='(')
           {
               finish
           }

       }
   }
   if(top==0)
   {
       return 1;
   }
   else{

    return 0;
   }


}

start_
do
    char input[100005];
    scanf("%s",input);
    if(ck_balance_bracket(input))
    {
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }




 finish
done

