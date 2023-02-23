#include<bits/stdc++.h>
#define ll long long
#define do {

#define done }
#define print cout
#define jodi if

using namespace std;
int temp[100005];
int num[100005];


int fact(ll f)
{
    if(f<=1)
    {
        return 1;
    }
    else{

        return f*fact(f-1);
    }


}


void MargeSort(ll lo,ll hi)
{
    if(lo==hi) return;
    ll mid=(lo+hi)/2;
    MargeSort(lo,mid);
    MargeSort(mid+1,hi);
    ll i,j,k;
    for(ll i=lo,j=mid+1,k=lo;k<=hi;k++)
    {
        if(i==mid+1) temp[k]=num[j++];
        else if(j==hi+1) temp[k]=num[i++];
        else if(num[i]<num[j]) temp[k]=num[i++];
        else temp[k]=num[j++];

    }
    for(ll k=lo;k<=hi;k++)
    {
        num[k]=temp[k];
    }





}
int main()
do
    ll n;
    cin>>n;
    ll flag=0;
    for(ll i=2;i<n;i++)
    do
        if(n%2==0)
        do
            flag=1;
            break;
        done
    done
    if(flag==1) cout<<n<< " is not prime"<<endl;
    else cout<<n<< " is prime"<<endl;


    ///seive
    int prime[100005]={0};
    int a[100005]={0};
    for(ll i=2;i*i<n;i++)
    {
        if(prime[i]==0)
        {
            for(ll j=i*i;j<n;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    ll k=0;
    ll cnt=0;
    for(ll i=2;i<n;i++)
    {
        if(prime[i]==0)
        {
            a[k]=i;
            k++;
            cnt++;
        }
    }
    for(ll i=0;i<cnt;i++)
    {
        print<<a[i]<<endl;
    }

     ll lo=1,hi=n;
    for(ll i=1;i<=hi;i++)
    {
        cin>>num[i];
    }
    MargeSort(lo,hi);

    int b[100005];
    ll l=0,cnt2=0;
    for(ll i=1;i<=hi;i++)
    {
        b[l]=num[i];
        l++;
        cnt2++;
    }
    for(ll i=0;i<cnt2;i++)
    {
        cout<<b[i]<<" ";
    }

    ll flag2=0;
    for(ll i=1;i<=cnt2-1;i++)
    {
        if(b[i]==b[i+1])
        {
            flag2=1;
            break;
        }
    }
    if(flag2==1) cout<<"not distinct"<<endl;
    else cout<<"distinct"<<endl;

    ///map using
    int c[100005];
    for(ll i=0;i<cnt2;i++)
    {
        c[i]=0;
    }
    for(ll i=0;i<cnt2;i++)
    {
        c[b[i]]++;
    }
    for(ll i=1;i<=cnt2;i++)
    {
        cout<<i<<" ase "<<c[i]<<" ber "<<" ";
    }
     //system("debian");

     //dynamic programming
    ll kba,bs;
    cin>>kba>>bs;
    ll weight[kba+1],cost[kba+1],dp[kba+1][bs+1];
    for(ll i=1;i<=kba;i++)
    {
        cin>>weight[i];
    }
    for(ll i=1;i<=bs;i++)
    {
        cin>>cost[i];
    }
    for(ll i=0;i<=kba;i++)
    {
        for(ll j=0;j<=bs;j++)
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
    cout<<dp[kba][bs];
    ///factorial
    ll f;
    cin>>f;
    cout<<fact(f)<<endl;
    return 0;
done

