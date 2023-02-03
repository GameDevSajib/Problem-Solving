#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
      vector<char>v1;
      vector<char>v2;

      string s;
      cin>>s;
      for(int i=0;i<(s.size())/2;i++)
      {
          v1.pb(s[i]);
      }
      for(int i=(s.size())-1;i>(s.size())/2;i--)
      {
         v2.pb(s[i]);
      }
      ll flag=0;
      for(ll i=0,j=0;i<v1.size()&&j<v2.size();i++,j++)
      {
           if(v1[i]!=v2[j])
           {
               flag=1;
               break;
           }

      }
      if(flag==1) cout<<"Sorry! It is not palindrome!"<<endl;
      else cout<<"Yes! It is palindrome!"<<endl;

  }




 return 0;
}
