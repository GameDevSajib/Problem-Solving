#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   string s;
   cin>>s;
   for(ll i=0;i<s.size();i++)
   {
       if(s[i]=='a')
       {
           s[i]='0';
       }
   }
      for(ll i=0;i<s.size();i++)
   {
       if(s[i]=='b')
       {
           s[i]='1';
       }
   }

      for(ll i=0;i<s.size();i++)
   {
       if(s[i]=='c')
       {
           s[i]='1';
       }
   }

     cout<<s<<endl;

    return 0;
}
