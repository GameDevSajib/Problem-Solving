#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    if(ptr==NULL)
    {
        cout<<" MEMORY NOT ALLOCATED"<<endl;
    }
    else{
        cout<<"Allocation Sucess"<<endl;

        //do work

        free(ptr);
        cout<<"Memory freed"<<endl;
    }





    return 0;
}

