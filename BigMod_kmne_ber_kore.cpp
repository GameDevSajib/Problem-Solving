#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
ll BigMod(ll b,ll p,ll m)
{
    ll p1,p2;
   if(p==0) return 1;
   else if(p%2==0)
   {
       p1=BigMod(b,p/2,m)%m;
       return (p1*p1)%m;
   }
   else if(p%2!=0)
   {
       p1=b%m;
       p2=BigMod(b,p-1,m)%m;
       return (p1*p2)%m;
   }



}
int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll b,p,m;
    cin>>b>>p>>m;
    ll x=BigMod(b,p,m);
    cout<<"Result = "<<x<<endl;
    }


    return 0;
}
