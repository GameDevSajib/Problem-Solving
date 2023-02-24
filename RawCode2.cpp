#include<stdio.h>
#define ll long long
int rec(ll n)
{
    if(n<1) return 1;
    return n*rec(n-1);
}
int main()
{
    ll n;
    scanf("%d",&n);
    ll r=rec(n);
    printf("%d\n",r);
    int a[100005];
    int b[100005]={0};
    for(ll i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ll k=0;
    ll cnt=0;
    for(ll i=0;i<n;i++){
    ll x=rec(a[i]);
     b[k]=x;
     k++;
     cnt++;
    }
    for(ll i=0;i<cnt;i++)
    {
        printf("%d\n",b[i]);
    }



    return 0;
}
