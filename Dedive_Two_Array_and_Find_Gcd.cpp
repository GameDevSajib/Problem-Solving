#include<bits/stdc++.h>
#define ll long long
#define MX 100005
#define pb push_back
#define do {
#define done }
#define read std::cin>>
#define echo std::cout<<
#define start_ int main()
#define finish return 0;

using namespace std;

int a[MX];
int b[MX];
int c[MX];
int d[MX];

class NumberTheory{
public:
      int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
};

class Multiple_Number_gcd:public NumberTheory {
public:
        int Multiple_Array_Input(int d[],int n)
        {
            int res=d[0];
            for(int i=1;i<n;i++)
            {
               res=gcd(d[i],res);
            }
            return res;

        }
};

class Codeforces{
public:
        void Solve()
        {
            int n;read n;
           for(int i=1;i<=n;i++)
           {
               read a[i];
           }

           for(int i=1;i<=n/2;i++)
           {
               b[i]=a[i];
           }
             for(int i=(n/2)+1;i<=n;i++)
             {
                   c[i]=a[i];
             }
        }
};



start_
do

      NumberTheory nt;
      Codeforces cf;
      cf.Solve();
      int sn=sizeof(a)/sizeof(a[0]);
      int k=sizeof(b)/sizeof(b[0]);
      int l=sizeof(c)/sizeof(c[0]);

      Multiple_Number_gcd mng;
      int r=mng.Multiple_Array_Input(b,k);
      int h=mng.Multiple_Array_Input(c,l);
      //echo r<<" "<<h<<"\n";
      if(r==h)
      {
          echo "NO"<<"\n";
      }
      else if(r!=h)
      {
          echo "YES"<<"\n";


      }

   finish
done

