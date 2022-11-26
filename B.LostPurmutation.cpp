#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
         map<ll,ll>mp;
         int m,s;
         cin>>m>>s;
         int a[m];
         for(int i=0;i<m;i++)
         {
             cin>>a[i];
         }
         for(int i=0;i<m;i++)
         {
             mp[a[i]]++;
         }
         int mx=0;
         for(int i=0;i<m;i++)
         {
             if(a[i]>mx)
             {
                 mx=a[i];
             }
         }
         int flag=0;
         ll sum=0;
         for(int i=1;i<=mx;i++)
         {
             if(!mp[i])
             {
                 sum+=i;
             }
             if(sum>s)
             {
                 flag=1;
             }
         }
         if(sum==s)
         {
             cout<<"yes"<<endl;
             continue;
         }
         ++mx;
         while(sum<s)
         {
             sum+=mx;
             ++mx;
         }
         if(sum==s)
         {
             cout<<"yes"<<endl;
         }
         else{
            cout<<"no"<<endl;
         }



    }


    return 0;
}
