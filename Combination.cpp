#include<bits/stdc++.h>
using namespace std;
int a[100000];
int fact(int i)
{
    if(i==0) return 1;
    int val=fact(i-1)*i;
    a[i]=val;
    return val;
}
int main()
{
  int n,k;
  cin>>n>>k;

  fact(n);
  for(int i=1;i<=n;i++) cout<<a[i]<<endl;

  cout<<a[n]/(a[k]*a[n-k]);

 return 0;
}
