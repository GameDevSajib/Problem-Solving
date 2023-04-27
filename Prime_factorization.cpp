///BISMILLAH
///prime factorization mane holo kono sonkha k only prime number gulo
///dia represent kora//
///example n=24
///ans: 2,2,2,3
///2 ase 3 ber
///3 ase 1 ber

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;cin>>n;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ll cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
                cout<<i<<" ";
            }
            cout<<endl;
            cout<<i<<" ase "<<cnt<<" ber "<<endl;
        }
    }
    if(n>1) cout<<n<<" ";
    cout<<endl;
    cout<<n<<" ase "<<1<<" ber "<<endl;

    return 0;
}
