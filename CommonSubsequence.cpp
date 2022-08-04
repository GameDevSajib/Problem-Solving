/*7
2 1 5 7 5 1 4

output:4
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   int n;
   cin>>n;
   vector<int>v(n);
   map<ll,ll>m;
   for(int i=0;i<n;i++)
   {
      cin>>v[i];
   }
   int l=0,ans=0;
   for(int r=0;r<n;r++)
   {
      m[v[r]]++;
      if(m[v[r]]==2)
      {
         while(m[v[r]]==2)
         {
            m[v[l]]--;
            l++;
         }
      }
      ans=max(ans,r-l+1);
   }
   cout<<ans<<endl;
   return 0;
}
