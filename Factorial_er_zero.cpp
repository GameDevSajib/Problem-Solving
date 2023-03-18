#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    int a[100005];
    //cout<<fact(n)<<endl;
    ll k=0;
    for(ll i=5;i<1000;i=i*5)
    {
        ll x=n/i;
        a[k]=x;
        k++;
    }
    ll sum=0;
    for(ll i=0;i<k;i++)
    {
        sum+=a[i];
    }
    cout<<sum<<endl;
    }
    return 0;
}
