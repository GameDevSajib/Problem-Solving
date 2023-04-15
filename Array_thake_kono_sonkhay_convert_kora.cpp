//BISMILLAH
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    int a[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll i=0;
    ll var=0;
    ll number=0;
    while(i<n)////i jokhon n or array er size thake coto
    {
        var=a[i];
        while(var!=0)///aber var jdi o na hoy
        {
            var=var/10;
            number=number*10;
        }
        number+=a[i];
        i++;
    }
    cout<<number<<endl;


    return 0;
}
