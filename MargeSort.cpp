#include<bits/stdc++.h>
using namespace std;
int num[10000],temp[10000];
void MargeSort(int lo,int hi)
{
  if(lo==hi) return;
  int mid=(lo+hi)/2;
  MargeSort(lo,mid);
  MargeSort(mid+1,hi);

  int i,j,k;
  for(i=lo,j=mid+1,k=lo;k<=hi;k++)
  {
      if(i==mid+1) temp[k]=num[j++];
      else if(j==hi+1)temp[k]=num[i++];
      else if(num[i]<num[j]) temp[k]=num[i++];
      else temp[k]=num[j++];
  }
  for(k=lo;k<=hi;k++){
      num[k]=temp[k];
  }
}
int main()
{

 int n;
 cin>>n;
 int lo=1,hi=n;
 for(int i=1;i<=n;i++)
 {
   cin>>num[i];
 }
 MargeSort(lo,hi);
 for(int i=1;i<=n;i++)
 cout<<num[i]<<" ";
 return 0;
}
