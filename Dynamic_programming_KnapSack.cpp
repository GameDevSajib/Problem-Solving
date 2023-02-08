#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll koita_bosto_ase,bag_size;
    cin>>koita_bosto_ase>>bag_size;
    ll weight[koita_bosto_ase+1],cost[koita_bosto_ase+1],dp[koita_bosto_ase+1][bag_size+1];
    for(ll i=1;i<=koita_bosto_ase;i++)
    {
        cin>>weight[i];
    }
    for(ll i=1;i<=koita_bosto_ase;i++)
    {
        cin>>cost[i];
    }
    for(ll i=0;i<=koita_bosto_ase;i++)
    {
        for(ll j=0;j<=bag_size;i++)
        {
              if(!i || !j)
              {
                   dp[i][j]=0;
                   continue;
              }
              if(weight[i]>j)
              {
                   dp[i][j]=dp[i-1][j];
              }
              else{

                   dp[i][j]=max(dp[i-1][j-weight[i]]+cost[i],dp[i-1][j]);
              }
        }

    }
    cout<<dp[koita_bosto_ase][bag_size];




 return 0;
}
