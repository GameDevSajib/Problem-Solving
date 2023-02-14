#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll a,b,c;
      cin>>a>>b>>c;
      ll l= (a/c)*c;
      if(l<a) l+=c;
      for(ll i=l;i<=b;i+=c)
        cout<<i<<endl;


   }
   cout<<endl;

    return 0;
}
