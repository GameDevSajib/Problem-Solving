#include<bits/stdc++.h>
#define ll long long
using namespace std;
void swaping(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main()
{
    ll n,k;
    cin>>n;
    int a[n+5];
    int b[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n-1;i++)
    {
        int x=i;
        for(ll j=i+1;j<n;j++)
        {
            if(a[j]<a[x])
            {
                x=j;
            }
        }
        swaping(&a[x],&a[i]);
    }
    for(ll i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
