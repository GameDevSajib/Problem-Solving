#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    int a[n+5];
    vector<int>x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            x.push_back(a[i]+a[j]);
        }
    }
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<endl;
    }
     sort(x.begin(),x.end());
     int flag=0;
     for(int i=0;i<x.size()-1;i++)
     {
         if(x[i]==x[i+1])
         {
             flag=1;
         }
     }
     if(flag==1) cout<<"not b2 sequence"<<endl;
     else cout<<"b2 sequence"<<endl;


}
