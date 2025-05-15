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

int num[MX];
int temp[MX];

class Algo{
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
                if(i==mid+1) temp[k]=num[j++];
                else if(j==hi+1) temp[k]=num[i++];
                else if(num[i]<num[j])temp[k]=num[i++];
                else temp[k]=num[j++];
            }
            for(k=lo;k<=hi;k++)
            {
                num[k]=temp[k];
            }
        }
};


class Codeforces:public Algo{
public:
         void Solve()
         {
              string s,s2;
              read s;
              for(int i=0;i<s.size();i++)
              {
                  num[i]=s[i]-'0';
              }
              Marge(0,s.size());
              int len=s.size();
              int cnt=0;
              for(int i=1;i<=len;i++)
              {
                  if(num[i]!=num[i+1])
                  {
                      s2[i]=num[i]+'0';
                       echo s2[i];
                      cnt++;

                  }
              }

              echo cnt;
              if(cnt%2==0) echo "CHAT WITH HER!"<<"\n";
              else echo "IGNORE HIM!"<<"\n";
         }

};


start_
do
    Codeforces cf;
    cf.Solve();




   finish
done

