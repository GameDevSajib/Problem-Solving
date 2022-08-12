#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool prime[100005];
int temp[100000];
int num[100000];
bool vis[100005];
int dist[100005];
vector<int>v3[100005];
///sorting algo ==>marge sort
void MargeSort(int lo,int hi)
{
    if(lo==hi) return;
    int mid=(lo+hi)/2;
    MargeSort(lo,mid);
    MargeSort(mid+1,hi);

    int i,j,k;
    for(int i=lo,j=mid+1,k=lo;k<=hi;k++)
    {
        if(i==mid+1) temp[k]=num[j++];
        else if(j==hi+1) temp[k]=num[i++];
        else if(num[i]<num[j]) temp[k]=num[i++];
        else temp[k]=num[j++];
    }
    for(int k=lo;k<=hi;k++)
    {
       num[k]=temp[k];
    }


}

 ///eber colo graph shiki
 void dfs(ll node )
 {
     vis[node]=1;
     for(int i=0;i<v3[node].size();i++)
     {
        int child=v3[node][i];
        if(vis[child]==0)
        {
            dist[child]=dist[node]+1;
            dfs(child);
        }
     }

 }

int main()
{
   ///for finding out the margeSort result
   int m;
   cin>>m;
   vector<int>v2;
   int lo=1,hi=m;
   for(int i=1;i<=m;i++)
   {
      cin>>num[i];
   }
   MargeSort(lo,hi);
   for(int i=1;i<=m;i++)
   {
      cout<<num[i]<<" "<<endl;
   }
   for(int i=1;i<=m;i++)
   {
      v2.push_back(num[i]);
   }
   for(int i=0;i<v2.size();i++)
   {
      cout<<v2[i]<<" ";
   }
   ///eber amra binary search chalabo
   ///karon binary search amara sorted array er jonno chalai
    int key;
   cin>>key;
   int s=0,e=v2.size()-1;

   while(s<=e)
   {
      int midp=(s+e)/2;
      if(v2[midp]==key)
      {
         cout<<midp<<endl;
         break;
      }
      else if(v2[midp]<key)
      {
          s=midp+1;
      }
      else{
          e=midp-1;
      }
   }
   ///using stl
   cout<<binary_search(v2.begin(),v2.end(),key)<<endl;



  ///prime number seive
  int n;
  cin>>n;
  vector<int>v;
  for(int i=2;i<=n;i++)
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
      if(prime[i]==false)
      //cout<<i<<" "<<endl;
      v.push_back(i);
  }
  for(int i=0;i<v.size();i++)
  {
     cout<<v[i]<<" "<<endl;
  }

  ///akon amak ber korte hbe j kon sonkha kotober ase
  map<ll,ll>cnt;
  for(int i=0;i<v.size();i++)
  {
      cnt[i]=0;
  }
  for(int i=0;i<v.size();i++)
  {
       cnt[v[i]]++;
  }
  for(int i=0;i<v.size();i++)
  {
        cout<<v[i]<<" "<<cnt[v[i]]<<endl;
  }

  int mx=0,mxc=0,mn=10000009,mnc=10000009;
  for(int i=0;i<v.size();i++)
  {
      if(cnt[v[i]]>=mxc)
      {
          mxc=cnt[v[i]];
          mx=max(v[i],mx);
      }
      if(cnt[v[i]]<=mnc)
      {
          mnc=cnt[v[i]];
          mn=min(v[i],mn);
      }
  }
  cout<<mx<<" "<<mn<<endl;
///dfs er jonno
  int nodes,edges;
  cin>>nodes>>edges;
  for(int i=0;i<edges;i++)
  {
     int x,y;
     cin>>x>>y;
     v3[x].push_back(y);
     v3[y].push_back(x);
  }
  dfs(1);
  for(int i=1;i<=nodes;i++)
  {
     cout<<dist[i]<<" ";
  }

  return 0;
}
