#include<bits/stdc++.h>
#define ll long long
#define all(x) x.begin(),x.end()
#define FastIo ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5+5;

using namespace std;
int main()
{
    ll n,x;
    cin>>n;
    vector<int>v;
    string s;
    while(n!=0)
    {
        x=n%10;
        n=n/10;
        v.push_back(x);
        //cout<<x<<endl;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }





    return 0;
}


