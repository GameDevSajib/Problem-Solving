#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll t1=0,t2=1,next_term=0;
    for(ll i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<t1<<endl;
            continue;
        }
        if(i==2)
        {
            cout<<t2<<endl;
            continue;
        }
        next_term=t1+t2;
        t1=t2;
        t2=next_term;
        cout<<next_term<<endl;
    }

    return 0;
}


