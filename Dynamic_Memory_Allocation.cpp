#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
    if(ptr==NULL)
    {
        cout<<" MEMORY NOT ALLOCATED"<<endl;
    }
    else{
        cout<<"Allocation Sucess"<<endl;
    }




    return 0;
}
