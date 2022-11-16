#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool vis[100005];
int dist[100005];
vector<int>v[100005];
 void dfs(ll node )
 {
     vis[node]=1;
     for(int i=0;i<v[node].size();i++)
     {
        int child=v[node][i];
        if(vis[child]==0)
        {
            dist[child]=dist[node]+1;
            dfs(child);
        }
     }

 }


int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1);
    for(int i=1;i<=nodes;i++)
    {
        cout<<dist[i]<<" ";
    }


    return 0;
}