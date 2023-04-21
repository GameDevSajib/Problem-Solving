#include<bits/stdc++.h>
#define ll long long
using namespace std;
void Rec(ll i,ll t)
{
    if(i<=t)
    {
        cout<<i<<" ";
        Rec((i=i+1),t);
    }

}

int main()
{
    ll t;
    cin>>t;
    ll i=1;
    Rec(i,t);

    return 0;
}




