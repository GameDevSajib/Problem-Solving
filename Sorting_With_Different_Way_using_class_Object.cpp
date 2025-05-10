
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define MX 100005
#define do {
#define done }
#define read std::cin>>
#define echo std::cout<<
#define start_ int main()
#define finish return 0;

using namespace std;
int temp[MX];
int num[MX];

class Cpp{

public:
          void Marge(int lo,int hi)
          {
              if(lo==hi) return;
              int mid=(lo+hi)/2;
              Marge(lo,mid);
              Marge(mid+1,hi);
              int i,j,k;
              for(i=lo,j=mid+1,k=lo;k<=hi;k++)
              {
                  if(i==mid+1)temp[k]-num[j++];
                  else if(j==hi+1)temp[k]=num[i++];
                  else if(num[i]<num[j])temp[k]=num[i++];
                  else temp[k]=num[j++];
              }
              for(k=lo;k<=hi;k++)
              {
                  num[k]=temp[k];
              }
          }
};


class Codeforces:public Cpp{

public:
         int Solve(int num[],int n,int k)
         {
             int lo=1,hi=n;
             for(int i=lo;i<=hi;i++)
             {
                read num[i];
             }
             Marge(lo,hi);
             for(int i=lo;i<=hi;i++)
             {
                echo  num[i]<<"\n";
             }
             int cnt=0;
             for(int i=1;i<=n;i++)
             {
                if((num[i]>=num[k])&&(num[i]!=0))
                {
                    cnt++;
                }
             }
             return cnt;
         }

} ;
start_
do

     int n,k;
     read n;
     read k;
     Codeforces cf;
     int x=sizeof(num)/sizeof(num[0]);
     int y=cf.Solve(num,n,k);
     echo y<<"\n";








   finish
done




