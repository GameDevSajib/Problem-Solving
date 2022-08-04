#include<bits/stdc++.h>
using namespace std;
int main()
{
  bool prime[100]={0};
  int n;
  cin>>n;
  for(int i=2;i*i<=n;i++)
  {
     if(prime[i]==false)
     {
        for(int j=i*i;j<=n;j+=i)
        {
           prime[j]=true;
        }
     }
  }
  for(int i=2;i<=n;i++)
  {
     if(prime[i]==false) cout<<i<<" ";

  }

  return 0;
}
