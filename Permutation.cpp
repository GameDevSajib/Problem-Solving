#include<bits/stdc++.h>
using namespace std;
int a[100005];
int fact(int n)
{
    if(n==0) return 1;
    int var=n*fact(n-1);
    a[n]=var;
    return var;
}
int main()
{
  int n,k;
  cin>>n>>k;
  fact(n);
  for(int i=1;i<=n;i++) cout<<a[i]<<endl;
  ///npr=n!/(n-r)!
  cout<<a[n]/(a[n-k])<<endl;


 return 0;
}
