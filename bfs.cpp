//write down the code of bfs 

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int dist[n+1];
    for(int i=0;i<=n;i++)
    {
        dist[i]=-1;
    }
    queue<int>q;
    q.push(1);
    dist[1]=0;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(auto it:adj[node])
        {
            if(dist[it]==-1)
            {
                q.push(it);
                dist[it]=dist[node]+1;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<dist[i]<<" ";
    }
    return 0;
}
