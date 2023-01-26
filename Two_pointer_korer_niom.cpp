#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       ll n;
       cin>>n;
       int a[n+5];
       for(int i=0;i<n;i++)
       {
            cin>>a[i];
       }
       sort(a,a+n);
       ll sum=0;
       for(int i=0;i<n;i++)
       {
         sum+=a[i];
       }
        ll k;
        cin>>k;
       for(int i=0,j=n-1;i<j&&i<n&&j>=0;)
       {
              if(a[i]+a[j]==k)
              {
                   cout<<a[i]<<" "<<a[j]<<" ";
                   break;
              }
              else if(a[i]+a[j]<k)
              {
                     i++;

              }
              else{
                      j--;
              }

       }




   }



   return 0;
}

